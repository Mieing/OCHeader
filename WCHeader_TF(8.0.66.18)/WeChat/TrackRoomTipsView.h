@class CContact, UIImageView, UILabel, UIButton;
@protocol TrackRoomTipsViewDelegate;

@interface TrackRoomTipsView : UIView {
    BOOL _isUnfold;
    BOOL _isAnimating;
    UIImageView *_bgView;
    UIImageView *_iconView;
    UIImageView *_iconHLView;
    UILabel *_foldTipsLabel;
    UIImageView *_arrowView;
    UILabel *_unfoldTipsLabel;
    UIButton *_enterButton;
    UIButton *_cancelButton;
}

@property (weak, nonatomic) id<TrackRoomTipsViewDelegate> delegate;
@property (retain, nonatomic) CContact *contact;

- (id)initWithContact:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initView;
- (void)updateTipsView;
- (void)setTipsTitle:(id)a0;
- (void)unfoldAnimationFinish;
- (void)doUnfoldAnimation;
- (void)unfold;
- (void)doFoldAnimation;
- (void)resetTipsView;
- (void)startIconChangeAnimation;
- (void)doIconHighlightAnimation;
- (void)doIconDarkAnimation;
- (void)stopIconChangeAnimation;
- (BOOL)checkTouchPoint:(struct CGPoint { double x0; double x1; })a0 IfInView:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)onCancelButtonPress;
- (void)onEnterButtonPress;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (double)getUnFoldTipHeight;
- (void).cxx_destruct;

@end
