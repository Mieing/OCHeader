@class NSString;

@interface AWEClientAIService : HTSService <AWEClientAIService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)KVStorageHandler;
- (id)UIBlockHelper;
- (id)dynamicModelKeyPathGetter;

@end
