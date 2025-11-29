@class UIView, WCFinderContact, MMFinderLiveTask, UIButton, WCFinderAuthInfoIconView, MMUILabel, WCFinderHeadImageView, MMUIButton;

@interface MMFinderLiveForbidJoinLiveFullScreenView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView;
@property (retain, nonatomic) MMUILabel *anchorNameLabel;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMUILabel *tipsLabel;
@property (readonly, nonatomic) WCFinderContact *anchorContact;
@property (copy, nonatomic) id /* block */ closeCallback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveTask:(id)a1;
- (void)showInView:(id)a0;
- (void)dismiss;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutConfirmButton;
- (void)layoutBackgroundView;
- (void)layoutCloseButton;
- (void)layoutAnchorHeadImageView;
- (void)layoutAnchorNameLabelAndAuthIconView;
- (void)layoutTipsLabel;
- (void)onConfirmButtonClicked;
- (void)updateConfirmButtonTitleAndImage;
- (void)onCloseButtonClicked;
- (id)tipsLabelFont;
- (id)tipsLabelText;
- (BOOL)needAnchorInfo;
- (void).cxx_destruct;

@end
