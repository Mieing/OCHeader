@class AWEHPChannelLottieParams, AWEHPLottiePlayParams;

@interface AWEHPBottomTabLottieParams : AWEHPBaseComponentModel

@property (nonatomic) long long lottieType;
@property (retain, nonatomic) AWEHPChannelLottieParams *lottieParams;
@property (retain, nonatomic) AWEHPLottiePlayParams *playParams;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
