@class AWEHPChannelLottieParams, AWEHPLottiePlayParams;

@interface AWEHPTopTabLottieParams : AWEHPBaseComponentModel

@property (retain, nonatomic) AWEHPChannelLottieParams *lottieParams;
@property (retain, nonatomic) AWEHPLottiePlayParams *playParams;

- (void).cxx_destruct;
- (BOOL)isValidWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
