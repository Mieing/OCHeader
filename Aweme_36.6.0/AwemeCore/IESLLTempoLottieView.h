@class NSDictionary, LOTAnimationView, NSString;

@interface IESLLTempoLottieView : UIView

@property (copy, nonatomic) NSDictionary *lottieJsonDictionary;
@property (retain, nonatomic) LOTAnimationView *lottieView;
@property (copy, nonatomic) NSString *src;
@property (copy, nonatomic) NSString *json;
@property (nonatomic) double speed;
@property (nonatomic) BOOL autoplay;
@property (nonatomic) BOOL autoReverse;
@property (nonatomic) long long loopCount;
@property (nonatomic) double startProgress;
@property (nonatomic) double endProgress;

- (BOOL)isScrollContainer;
- (void)didBuildView;
- (void)endShow;
- (void)startShow;
- (void).cxx_destruct;

@end
