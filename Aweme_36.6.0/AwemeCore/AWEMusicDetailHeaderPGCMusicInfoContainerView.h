@class CAGradientLayer, NSString, UIImageView, UILabel, UIView, AWEMusicDetailPGCMusicInfoViewLayoutManager;
@protocol AWEMusicDetailPGCMusicInfoViewDelegate;

@interface AWEMusicDetailHeaderPGCMusicInfoContainerView : UIView <CAAnimationDelegate>

@property (retain, nonatomic) AWEMusicDetailPGCMusicInfoViewLayoutManager *layoutManager;
@property (retain, nonatomic) NSString *musicInfoStr;
@property (retain, nonatomic) UILabel *matchedPGCMusicInfoLabel;
@property (retain, nonatomic) UIImageView *matchedPGCMusicInfoArrow;
@property (retain, nonatomic) UILabel *loopPreLabel;
@property (retain, nonatomic) UIView *loopBorderClipView;
@property (retain, nonatomic) CAGradientLayer *loopMaskLayer;
@property (retain, nonatomic) UIView *loopContainerView;
@property (weak, nonatomic) id<AWEMusicDetailPGCMusicInfoViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)jumpToMatchedPGCMusicDetailPage;
- (void)p_updateLoopPGCInfoWithItemCount:(long long)a0;
- (void)p_setupLoopMask;
- (void)p_updatePGCInfo;
- (double)p_widthWithString:(id)a0 font:(id)a1;
- (void)p_startLastTimeLoopAnimation;
- (double)p_widthWithLabelString:(id)a0;
- (id)p_createMatchedPGCLabel;
- (id)arrowImgeView;
- (id)initWithLayoutManager:(id)a0;
- (void)updateMatchedPGCMusicInfo:(id)a0;
- (void)updateLoopMusicPGCInfoViewWith:(BOOL)a0;
- (void)showNonLoopMusicPGCInfoViewWith:(BOOL)a0;
- (void)showLoopMusicPGCInfoView:(BOOL)a0 hasInfoClickAction:(BOOL)a1;
- (void)startLoopAnimation;
- (void)pauseLoopAnimation;
- (void)stopLoopAnimation;
- (void)resumeLoopAnimation;
- (double)preLabelAndArrowWidth:(BOOL)a0;
- (double)loopStringWidth;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
