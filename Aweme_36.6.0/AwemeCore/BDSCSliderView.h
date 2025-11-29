@class UIPanGestureRecognizer, NSString, UIView;

@interface BDSCSliderView : UIView <UIGestureRecognizerDelegate>

@property (nonatomic) double progress;
@property (nonatomic) double cacheProgress;
@property (nonatomic) BOOL isInteractive;
@property (nonatomic) double progressBeforeDragging;
@property (retain, nonatomic) UIView *cacheProgressView;
@property (retain, nonatomic) UIView *trackProgressView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *thumbBackView;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (nonatomic) BOOL shouldFeedback;
@property (copy, nonatomic) id /* block */ banSeek;
@property (copy, nonatomic) id /* block */ didSeekToProgress;
@property (copy, nonatomic) id /* block */ seekingToProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hideBackThumbView:(BOOL)a0;
- (void)_buildViewHierarchy;
- (void)setCacheProgress:(double)a0 animated:(BOOL)a1;
- (void)hideThumbView:(BOOL)a0;
- (void)_bindGesture;
- (void)_updateTrackProgress;
- (void)_updateCacheProgress;
- (double)_maxProgressWidth;
- (void)visiableChanged:(BOOL)a0;
- (void)setCacheProgressColor:(id)a0;
- (void)setTrackProgressColor:(id)a0;
- (void)_updateLayout;
- (void).cxx_destruct;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)pan:(id)a0;
- (void)layoutSubviews;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end
