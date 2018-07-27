
/*
 * Copyright (c) 2008, Institute for Software Integrated Systems, Vanderbilt University
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 *
 * IN NO EVENT SHALL THE VANDERBILT UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE VANDERBILT
 * UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * THE VANDERBILT UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE VANDERBILT UNIVERSITY HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 */

/*
 * 	NOTE:  ALL "if" STATEMENTS IN THIS CODE THAT HAD THE FORM:
 *
 *  if (condition) statement;
 *
 *	OR
 *
 *  if (condition) statement1;
 *  else           statement2;
 *
 *  HAVE BEEN CONVERTED TO THE FORMS:
 *
 *  if (condition) {
 *		statement;
 *	}
 *
 *	AND
 *
 *  if (condition) {
 *		statement1;
 *	} else {
 *		statement2;
 *	}
 *
 *	RESPECTIVELY.  THIS IS BECAUSE THE OMNET DEBUGGER APPEARS TO HAVE A PROBLEM
 *  WITH THE NON-BRACED FORMS OF THE IF STATEMENT.  *PLEASE* DO NOT CHANGE IT BACK.
 *  -- H.S.N.
 *
 */

#ifndef _PingCount_CLASS
#define _PingCount_CLASS

#include "ObjectRoot.hpp"
#include "C2WException.hpp"


class PingCount : public ObjectRoot {

public:
	typedef ObjectRoot Super;
	typedef boost::shared_ptr< PingCount > SP;

	static StringVector get_attribute_names() {
		return getDatamemberNames();
	}

	static StringVector get_all_attribute_names() {
		return getAllDatamemberNames();
	}

	PingCount( void ) { }
	
	static SP create( void ) { return SP( new PingCount ); }

private:
	
	
	static int &get_RunningCount_handle_var( void ) {
		static int RunningCount_handle;
		return RunningCount_handle;
	}
	static int &get_SinkName_handle_var( void ) {
		static int SinkName_handle;
		return SinkName_handle;
	}
	
public:
	
	
	static int get_RunningCount_handle( void ) { return get_RunningCount_handle_var(); }
	static int get_SinkName_handle( void ) { return get_SinkName_handle_var(); }
	


private:
	static int &getHandle( void ) {
		static int handle;
		return handle;
	}

public:
	static int get_handle( void ) { return getHandle(); }
	static std::string get_class_name( void ) { return "PingCount"; }

private:
	static StringVector &getDatamemberNames( void ) {
		static StringVector datamemberNames;
		return datamemberNames;
	}

	static StringVector &getAllDatamemberNames( void ) {
		static StringVector allDatamemberNames;
		return allDatamemberNames;
	}


private:
	static RTI::AttributeHandleSet &getPublishedAttributeHandleSet_var( void ) {
		static RTI::AttributeHandleSet *publishedAttributeHandleSetPtr = RTI::AttributeHandleSetFactory::create( 2 );
		return *publishedAttributeHandleSetPtr;
	}
	static StringVector &getPublishAttributeNameVector( void ) {
		static StringVector publishAttributeNameVector;
		return publishAttributeNameVector;
	}	
	
	static RTI::AttributeHandleSet &getSubscribedAttributeHandleSet_var( void ) {
		static RTI::AttributeHandleSet *subscribedAttributeHandleSet = RTI::AttributeHandleSetFactory::create( 2 );
		return *subscribedAttributeHandleSet;
	}
	static StringVector &getSubscribeAttributeNameVector( void ) {
		static StringVector subscribeAttributeNameVector;
		return subscribeAttributeNameVector;
	}	


private:

	static ObjectRoot::SP factory( void ) {
		return ObjectRoot::SP( new PingCount() );
	}


	static std::string &getInitErrorMessage( void ) {
		static std::string initErrorMessage( "Error:  PingCount:  could not initialize:  " );
		return initErrorMessage;
	}

protected:
	static void init( RTI::RTIambassador *rti );
	
private:
	static bool &getIsPublished( void ) {
		static bool isPublished = false;
		return isPublished;
	}
	
	static std::string &getPublishErrorMessage( void ) {
		static std::string publishErrorMessage = "Error:  PingCount:  could not publish:  ";
		return publishErrorMessage;
	}
	
public:
	static void publish( RTI::RTIambassador *rti );
	
private:
	static std::string &getUnpublishErrorMessage( void ) {
		static std::string unpublishErrorMessage = "Error:  PingCount:  could not unpublish:  ";
		return unpublishErrorMessage;
	}

public:
	static void unpublish( RTI::RTIambassador *rti );

private:
	static bool &getIsSubscribed( void ) {
		static bool isSubscribed = false;
		return isSubscribed;
	}
	static std::string &getSubscribeErrorMessage( void ) {
		static std::string subscribedErrorMessage = "Error:  PingCount:  could not subscribe:  ";
		return subscribedErrorMessage;
	}

public:
	static void subscribe( RTI::RTIambassador *rti );
		
private:
	static std::string getUnsubscribeErrorMessage( void ) {
		static std::string unsubscribeErrorMessage = "Error:  PingCount:  could not unsubscribe:  ";
		return unsubscribeErrorMessage;
	}
	
public:
	static void unsubscribe( RTI::RTIambassador *rti );
	
	static bool static_init( void );
	
	static bool match( int handle ) { return handle == get_handle(); }

	virtual int getClassHandle( void ) const { return get_handle(); }
	virtual std::string getClassName( void ) const { return get_class_name(); }
	virtual StringVector getAttributeNames( void ) const { return get_attribute_names(); }
	virtual StringVector getAllAttributeNames( void ) const { return get_all_attribute_names(); }

	virtual void publishObject( RTI::RTIambassador *rti ) { publish( rti ); }
	virtual void subscribeObject( RTI::RTIambassador *rti ) { subscribe( rti ); }

	virtual ObjectRoot::SP clone( void ) {
		return ObjectRoot::SP(  new PingCount( *this )  );
	}


	virtual const RTI::AttributeHandleSet &getSubscribedAttributeHandleSet( void ) { return getSubscribedAttributeHandleSet_var(); }






public:
	
	
	static void publish_RunningCount( void ) {
		getPublishAttributeNameVector().push_back( "RunningCount" );
	}
	static void unpublish_RunningCount( void ) {
		getPublishAttributeNameVector().erase( std::remove( getPublishAttributeNameVector().begin(), getPublishAttributeNameVector().end(), "RunningCount" ), getPublishAttributeNameVector().end() );
	}
	
	static void subscribe_RunningCount( void ) {
		getSubscribeAttributeNameVector().push_back( "RunningCount" );
	}
	static void unsubscribe_RunningCount(void ) {
		getSubscribeAttributeNameVector().erase( std::remove( getSubscribeAttributeNameVector().begin(), getSubscribeAttributeNameVector().end(), "RunningCount" ), getSubscribeAttributeNameVector().end() );
	}
	
	
	static void publish_SinkName( void ) {
		getPublishAttributeNameVector().push_back( "SinkName" );
	}
	static void unpublish_SinkName( void ) {
		getPublishAttributeNameVector().erase( std::remove( getPublishAttributeNameVector().begin(), getPublishAttributeNameVector().end(), "SinkName" ), getPublishAttributeNameVector().end() );
	}
	
	static void subscribe_SinkName( void ) {
		getSubscribeAttributeNameVector().push_back( "SinkName" );
	}
	static void unsubscribe_SinkName(void ) {
		getSubscribeAttributeNameVector().erase( std::remove( getSubscribeAttributeNameVector().begin(), getSubscribeAttributeNameVector().end(), "SinkName" ), getSubscribeAttributeNameVector().end() );
	}
	
private:
	
	
	Attribute< int, int > _RunningCount;
	
	Attribute< int, std::string > _SinkName;
	
public:
	
	
	void set_RunningCount( int RunningCount ) {
		_RunningCount.setValue( RunningCount );
		_RunningCount.setTime( getTime() );
	}
	
	int get_RunningCount( void ) const {
		return _RunningCount.getValue();
	}
	
	double get_RunningCount_time( void ) {
		return _RunningCount.getTime();
	}
	
	
	void set_SinkName( const std::string & SinkName ) {
		_SinkName.setValue( SinkName );
		_SinkName.setTime( getTime() );
	}
	
	const std::string & get_SinkName( void ) const {
		return _SinkName.getValue();
	}
	
	double get_SinkName_time( void ) {
		return _SinkName.getTime();
	}
	


	PingCount( const RTI::AttributeHandleValuePairSet &datamemberMap ) : Super( datamemberMap ) { }
	
	PingCount( const RTI::AttributeHandleValuePairSet &datamemberMap, const RTIfedTime &logicalTime ) : Super( datamemberMap, logicalTime ) { }
	
	
public:
	TypeMedley getAttribute( const std::string &datamemberName ) const {
		
		
		if ( "RunningCount" == datamemberName ) {
			return TypeMedley( get_RunningCount() );
		}
		else if ( "SinkName" == datamemberName ) {
			return TypeMedley( get_SinkName() );
		} else {
			return Super::getAttribute( datamemberName );
		}
	}
	
	TypeMedley getAttribute( int datamemberHandle ) const {
		
		
		if ( get_RunningCount_handle() == datamemberHandle ) {
			return TypeMedley( get_RunningCount() );
		}
		else if ( get_SinkName_handle() == datamemberHandle ) {
			return TypeMedley( get_SinkName() );
		} else {
			return Super::getAttribute( datamemberHandle );
		}
	}

protected:
	virtual bool setAttributeAux( int param_handle, const std::string &val ) {
		bool retval = true;		
		
		
		if ( param_handle == get_RunningCount_handle() ) {
			set_RunningCount(  TypeMedley( val )  );
		}
		else if ( param_handle == get_SinkName_handle() ) {
			set_SinkName(  TypeMedley( val )  );
		} else {
			retval = Super::setAttributeAux( param_handle, val );
		}
		return retval;
	}
	
	virtual bool setAttributeAux( const std::string &datamemberName, const std::string &val ) {
		bool retval = true;
		
		
		if ( "RunningCount" == datamemberName ) {
			set_RunningCount(  TypeMedley( val )  );
		}
		else if ( "SinkName" == datamemberName ) {
			set_SinkName(  TypeMedley( val )  );
		} else {
			retval = Super::setAttributeAux( datamemberName, val );
		}
		
		return retval;
	}
	
	virtual bool setAttributeAux( const std::string &datamemberName, const TypeMedley &val ) {
		bool retval = true;
		
		
		if ( "RunningCount" == datamemberName ) {\
			set_RunningCount( val );
		}
		else if ( "SinkName" == datamemberName ) {\
			set_SinkName( val );
		} else {
			retval = Super::setAttributeAux( datamemberName, val );
		}
		
		return retval;
	}

	virtual AttributeHandleValuePairSetSP createDatamemberHandleValuePairSet( RTI::ULong count, bool force  );

	virtual AttributeHandleValuePairSetSP createDatamemberHandleValuePairSet(  bool force ) {
		return createDatamemberHandleValuePairSet( 0, force );
	}
	
	
};

typedef PingCount::SP PingCountSP;

static bool call_PingCount_static_init = PingCount::static_init();

std::ostream &operator<<( std::ostream &os, PingCount::SP entitySP );
std::ostream &operator<<( std::ostream &os, const PingCount &entity );
#endif
