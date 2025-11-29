@interface AWEJSONResponseSerializer : TTHTTPJSONResponseSerializerBaseChromium

+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (id)init;

@end
