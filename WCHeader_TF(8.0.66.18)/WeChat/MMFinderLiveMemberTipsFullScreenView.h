@class UIView;

@interface MMFinderLiveMemberTipsFullScreenView : MMFinderLiveForbidJoinLiveFullScreenView

@property (weak, nonatomic) UIView *parentView;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isShow;
@property (nonatomic) unsigned int requestActionSeq;
@property (copy, nonatomic) id /* block */ confirmCallback;
@property (nonatomic) unsigned long long memberShipPayCoinNum;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveTask:(id)a1;
- (id)getConfirmButtonText;
- (id)getConfirmtButtonImg;
- (void)onConfirm;
- (void)showInView:(id)a0;
- (void)dismiss;
- (void)updateConfirmButtonTitleAndImage;
- (void)onConfirmButtonClicked;
- (id)tipsLabelText;
- (void)checkIsMemberShipWithAnchor;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void).cxx_destruct;

@end
