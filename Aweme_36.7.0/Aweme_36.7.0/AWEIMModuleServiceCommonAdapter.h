@class NSString;

@interface AWEIMModuleServiceCommonAdapter : AWEIMModuleServiceCommonAdapterDefault <AWEIMModuleServiceCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)ironManTrackScene;
- (id)weakTarget;

@end
