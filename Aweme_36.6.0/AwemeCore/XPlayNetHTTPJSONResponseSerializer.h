@class NSSet, NSString;

@interface XPlayNetHTTPJSONResponseSerializer : TTHTTPJSONResponseSerializerBase <TTJSONResponseSerializerProtocol>

@property (copy, nonatomic) NSSet *acceptableContentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (id)init;

@end
