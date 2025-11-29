@interface IESECHTTPJSONResponseSerializer : TTHTTPJSONResponseSerializerBase

+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (id)errorUserInfoWithResponse:(id)a0 jsonObj:(id)a1;
- (BOOL)isIgnoreStatusCodeAssert:(id)a0;
- (id)init;

@end
