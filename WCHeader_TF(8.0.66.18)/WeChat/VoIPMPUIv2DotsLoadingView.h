@class NSArray;

@interface VoIPMPUIv2DotsLoadingView : VoIPMPUIv2View

@property (retain, nonatomic) NSArray *viewDots;
@property (nonatomic) unsigned long long lightIndex;
@property (copy, nonatomic) id /* block */ animateBlock;
@property (readonly, nonatomic) BOOL isAnimating;

- (void)animateContinually;
- (void)cancelAnimating;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
