@class NSString, NSArray, MultiTalkBannerItem, UIImageView, UIButton, MMUIView, MMBorderView, CContact, UILabel;

@interface MultiTalkTipsView : UIView {
    CContact *_contact;
    BOOL _isUnfold;
    BOOL _isAnimating;
    UIImageView *_bgView;
    UIImageView *_iconView;
    UIImageView *_iconHLView;
    UILabel *_foldTipsLabel;
    UIImageView *_arrowView;
    UILabel *_unfoldTitleLabel;
    UIButton *_enterButton;
    UIButton *_cancelButton;
    NSString *_wxGroupId;
    MultiTalkBannerItem *_bannerInfo;
    unsigned int _startTalkTimestamp;
    BOOL _isTimerStart;
    NSArray *_userList;
    MMUIView *_headImgContainerView;
    MMBorderView *_bannerBottomLine;
    MMBorderView *_buttonTopLine;
    MMBorderView *_buttonBottomLine;
    MMBorderView *_buttonMiddleLine;
}

- (id)initWithContact:(id)a0;
- (void)layoutSubviews;
- (void)initView;
- (void)updateHeadViews;
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
- (void)joinCurrentBannerMultiTalk;
- (void).cxx_destruct;

@end
