@class NSSet, NSString;

@interface XPlayHttpJsonResponseSerializer : TTHTTPJSONResponseSerializerBase <TTJSONResponseSerializerProtocol>

@property (copy, nonatomic) NSSet *acceptableContentTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializer;

- (id)responseObjectForResponse:(id)a0 jsonObj:(id)a1 responseError:(id)a2 resultError:(id *)a3;
- (id)dictionary:(id)a0 addLogIdEntry:(id)a1;

@end
