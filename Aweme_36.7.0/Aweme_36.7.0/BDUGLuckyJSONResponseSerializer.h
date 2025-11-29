@class NSMutableIndexSet;

@interface BDUGLuckyJSONResponseSerializer : TTHTTPJSONResponseSerializerBase

@property (retain, nonatomic) NSMutableIndexSet *acceptableStatusCodes;
@property (retain, nonatomic) NSMutableIndexSet *serverHangStatusCodes;

+ (void)registerResponseSerializerBlock:(id /* block */)a0;
+ (void)removeResponseSerializerBlock:(id /* block */)a0;
+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (id)p_getValueInDictionary:(id)a0 withKey:(id)a1;
- (long long)responseStatusWithCode:(long long)a0;
- (id)responseModelWithJSonObj:(id)a0 response:(id)a1 responseStatus:(long long)a2;
- (void)recordResponseServerInfoWithResponse:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
