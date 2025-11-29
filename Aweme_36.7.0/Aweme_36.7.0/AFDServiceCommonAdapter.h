@class NSString;

@interface AFDServiceCommonAdapter : AFDServiceCommonAdapterDefault <AFDServiceCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (id)weakTarget;

@end
