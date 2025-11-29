@class NSString, AWEHPTopTabLottieParams;

@interface AWEHPChannelItemModel : NSObject <NSCopying>

@property (nonatomic) long long itemType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *indicatorColor;
@property (retain, nonatomic) AWEHPTopTabLottieParams *lottie;
@property (copy, nonatomic) id /* block */ lottieShowBlock;
@property (copy, nonatomic) id /* block */ lottieExitBlock;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isValid;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
