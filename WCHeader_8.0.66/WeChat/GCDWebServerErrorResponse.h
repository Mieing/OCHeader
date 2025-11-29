@interface GCDWebServerErrorResponse : GCDWebServerDataResponse

+ (id)responseWithClientError:(long long)a0 message:(id)a1;
+ (id)responseWithServerError:(long long)a0 message:(id)a1;
+ (id)responseWithClientError:(long long)a0 underlyingError:(id)a1 message:(id)a2;
+ (id)responseWithServerError:(long long)a0 underlyingError:(id)a1 message:(id)a2;

- (id)initWithStatusCode:(long long)a0 underlyingError:(id)a1 messageFormat:(id)a2 arguments:(char *)a3;
- (id)initWithClientError:(long long)a0 message:(id)a1;
- (id)initWithServerError:(long long)a0 message:(id)a1;
- (id)initWithClientError:(long long)a0 underlyingError:(id)a1 message:(id)a2;
- (id)initWithServerError:(long long)a0 underlyingError:(id)a1 message:(id)a2;

@end
