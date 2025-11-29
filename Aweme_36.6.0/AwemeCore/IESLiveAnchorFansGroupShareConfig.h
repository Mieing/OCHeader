@interface IESLiveAnchorFansGroupShareConfig : NSObject

@property (nonatomic) long long countDownSeconds;
@property (nonatomic) long long showCountInWholeLive;
@property (nonatomic) long long buddleMaxShowTimeWithoutTap;
@property (nonatomic) BOOL fansGroupShareShowing;
@property (nonatomic) long long showCountYet;
@property (nonatomic) long long shareAnimationInterval;

- (id)init;

@end
