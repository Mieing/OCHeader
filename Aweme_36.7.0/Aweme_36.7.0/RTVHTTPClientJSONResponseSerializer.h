@interface RTVHTTPClientJSONResponseSerializer : TTHTTPJSONResponseSerializerBase

+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (BOOL)_error:(id *)a0 addHTTPStatusCodeWithResponse:(id)a1;
- (id)init;

@end
