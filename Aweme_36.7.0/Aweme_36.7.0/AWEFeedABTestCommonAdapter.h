@class NSString;

@interface AWEFeedABTestCommonAdapter : AWEFeedABTestCommonAdapterDefault <AWEFeedABTestCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (unsigned long long)detaultAntiAddictNoticeStrategyValue;

- (id)weakTarget;

@end
