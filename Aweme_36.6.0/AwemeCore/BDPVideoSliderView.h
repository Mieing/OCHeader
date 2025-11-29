@class BDPVideoGestureRecognizer, UIView;

@interface BDPVideoSliderView : UIView {
    double _progressBeforeDragging;
}

@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *trackProgressView;
@property (retain, nonatomic) UIView *cacheProgressView;
@property (retain, nonatomic) UIView *indicateView;
@property (retain, nonatomic) BDPVideoGestureRecognizer *panGesture;
@property (nonatomic) double progress;
@property (nonatomic) double cacheProgress;
@property (nonatomic) BOOL disableInteractive;
@property (nonatomic) BOOL canShow;
@property (nonatomic) BOOL needReShow;
@property (copy, nonatomic) id /* block */ didSeekToProgress;
@property (copy, nonatomic) id /* block */ seekingToProgress;
@property (copy, nonatomic) id /* block */ startSeekProgress;

- (void)setCacheProgress:(double)a0 animated:(BOOL)a1;
- (void)_updateTrackProgress;
- (void)_updateCacheProgress;
- (double)_maxProgressWidth;
- (id)initWithDisableInteractive:(BOOL)a0 showCurrent:(BOOL)a1;
- (void)setTrackProgressViewBackGroundColor:(id)a0;
- (id)initWithDisableInteractive:(BOOL)a0;
- (void)setCanShowBottomProgress:(BOOL)a0;
- (void)setupWithCurrentShow:(BOOL)a0;
- (void)_updateThumbPosition;
- (void)_updateLayout;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)_pan:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setup;
- (void)setProgress:(double)a0 animated:(BOOL)a1;

@end
