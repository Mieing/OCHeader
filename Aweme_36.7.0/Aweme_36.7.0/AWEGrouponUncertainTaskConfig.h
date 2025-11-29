@interface AWEGrouponUncertainTaskConfig : AWEBaseApiModel

@property (nonatomic) long long swipeStep;
@property (nonatomic) long long minSwipe;
@property (nonatomic) long long maxSwipe;
@property (nonatomic) long long clickStep;
@property (nonatomic) long long minClick;
@property (nonatomic) long long maxClick;
@property (nonatomic) float clickDelay;

+ (BOOL)automaticallyDefaultMapping;

@end
