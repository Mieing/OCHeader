@class NSString;

@interface AWELivePreStreamViewModelCommonAdapter : NSObject <AWELivePreStreamViewModelCommonAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)startCountingForRuleWithProductID:(id)a0;
- (void)stopCountingTimeForRuleWithProductID:(id)a0;
- (id)weakTarget;

@end
