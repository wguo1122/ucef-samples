package gov.nist.hla.samples.challengeresponse;

import java.util.Objects;

public class Response {
    private final String id;
    
    private final String substring;
    
    private final String responder;
    
    private final double responseTime;
    
    public Response(String id, String substring, String responder, double responseTime) {
        this.id           = id;
        this.substring    = substring;
        this.responder    = responder;
        this.responseTime = responseTime;
    }
    
    public String getId() {
        return id;
    }
    
    public String getSubstring() {
        return substring;
    }
    
    public String getResponder() {
        return responder;
    }
    
    public double getResponseTime() {
        return responseTime;
    }
    
    @Override
    public int hashCode() {
        return Objects.hash(id, responder);
    }
    
    @Override
    public boolean equals(Object o) {
        if (o == this) {
            return true;
        }
        if (!(o instanceof Response)) {
            return false;
        }
        
        Response response = (Response) o;
        return Objects.equals(id, response.id) && Objects.equals(responder, response.responder);
    }
    
    @Override
    public String toString() {
        return getClass().getName()
                + "(id=" + id
                + ", substring=" + substring
                + ", responder=" + responder
                + ", responseTime=" + responseTime + ")";
    }
}
