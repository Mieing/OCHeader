@interface CJPayJSONResponseSerializer : TTHTTPJSONResponseSerializerBase

+ (id)serializer;

- (id)acceptableContentTypes;
- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (void)error:(id *)a0 addHTTPStatusCodeWithResponse:(id)a1;
- (id)init;

@end
