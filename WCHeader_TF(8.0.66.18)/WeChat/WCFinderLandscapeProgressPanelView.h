@class CAGradientLayer, UIImageView, UILabel, RichTextView, WCFinderProgressBar;

@interface WCFinderLandscapeProgressPanelView : WCFinderProgressPanelView {
    WCFinderProgressBar *_progressBar;
}

@property (nonatomic) unsigned long long dragState;
@property (retain, nonatomic) UILabel *totalProgressTimeLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) RichTextView *textView;
@property (retain, nonatomic) UIImageView *playIconView;

- (void)updateProgressElementsWithCurrentPlayPosition:(double)a0 videoDuration:(double)a1 forbidProgressBarMovAnim:(BOOL)a2 contentVM:(id)a3 manual:(BOOL)a4;
- (void)layoutProgressBar;
- (void)updateControlsEnhanceColor;
- (void)updateControlsLayout;
- (void)resetUIViewState;
- (BOOL)isShowing;
- (double)getBottomGradientPositionY;
- (void)updateControlsHiddenState;
- (void)setupTextViewIfNeeded;
- (void)handleWithDraggingStateWithPrecent:(double)a0 dragState:(unsigned long long)a1;
- (void)hideSelfAndResetElemStateWithDelayTime:(double)a0;
- (void)cancelPreviousHideSelfAndResetElemFunc;
- (void)setViews:(id)a0 alpha:(double)a1;
- (void)hideSelfAndResetElemState;
- (void)setViewsAlphaZero;
- (void)resetViewsAlpha;
- (id)allViewsExceptProgressBar;
- (id)dynamicWhiteColor;
- (BOOL)shouldIgnoreLeftJumpInfo;
- (id)progressBar;
- (unsigned long long)progressStyle;
- (id)finderProgressBarGetContentVM;
- (void).cxx_destruct;

@end
