@class NSArray, UIImageView, WCADCanvasEggAnimationHugeDisk, UIImpactFeedbackGenerator, NSString;

@interface WCAdTwistHugeDiskView : MMUIView <WCCanvasImageLoaderObserver>

@property (retain, nonatomic) WCADCanvasEggAnimationHugeDisk *hugeDiskInfo;
@property (retain, nonatomic) UIImageView *flipBackView;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) double paddingBottom;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedback;
@property (retain, nonatomic) NSArray *impactTimings;
@property (nonatomic) int impactTimingIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInfo:(id)a0 flipBackView:(id)a1 imageSize:(struct CGSize { double x0; double x1; })a2 paddingBottom:(double)a3;
- (void)dealloc;
- (void)generateSubviews;
- (id)generateTwistTransitionSubviewWithImage:(id)a0 isSpecial:(BOOL)a1;
- (id)fetchImageForUrl:(id)a0;
- (void)updateSubviewsWithImage:(id)a0 forView:(id)a1;
- (double)fetchImageCornerRadius;
- (id)fetchSpecialView;
- (void)updateFlipBackViewWithImage:(id)a0;
- (void)startImpactInDuration:(double)a0;
- (id)generateimpactTimingsInDuration:(double)a0;
- (void)triggerImpactOnce;
- (void)triggerImpactOnceAtIndex:(int)a0;
- (id)generateCornerForImage:(id)a0 cornerRadius:(double)a1;
- (double)fetchEaseTimingFor:(double)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
