@class PAGView, MMUILabel, NSString;
@protocol MMFinderLiveMusicSettingInteractiveDelegate;

@interface MMFinderLiveMusicSettingInteractiveView : UIView <PAGViewListener>

@property (retain, nonatomic) PAGView *guideAnimatedView;
@property (retain, nonatomic) MMUILabel *guideLabel;
@property (nonatomic) double guideSizeScale;
@property (nonatomic) long long currentInteractiveState;
@property (weak, nonatomic) id<MMFinderLiveMusicSettingInteractiveDelegate> interactiveDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addGestureRecognizers;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutGuideAnimatedView;
- (void)layoutGuideLabel;
- (void)showGuideAnimatedView;
- (void)onLiveMusicSettingInteractiveTap;
- (BOOL)isShowingGuide;
- (void)stopGuidePlay;
- (void)createGuideAnimatedView;
- (void)createGuideLabel;
- (void)onAnimationEnd:(id)a0;
- (void)onAnimationCancel:(id)a0;
- (void)onTapGesture:(id)a0;
- (double)scaleValue:(double)a0;
- (void)createGuideContentScale;
- (struct CGSize { double x0; double x1; })getGuideContentSize;
- (void).cxx_destruct;

@end
