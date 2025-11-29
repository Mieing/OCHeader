@interface AWEGrouponCertainTaskConfig : AWEBaseApiModel

@property (nonatomic) float swipeTimeNeed;
@property (nonatomic) float couponAmount;
@property (nonatomic) float taskDelay;
@property (nonatomic) float popupAvoidDelay;
@property (nonatomic) float dialogCheckGap;

+ (BOOL)automaticallyDefaultMapping;

@end
