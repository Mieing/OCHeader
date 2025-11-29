@class NSTimer, NSString;

@interface BDSCLoadingLabel : UILabel

@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) NSTimer *loadingTimer;
@property (copy, nonatomic) NSString *animationText;

- (void)loadLabelAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)dealloc;
- (double)maxLabelWidth;

@end
