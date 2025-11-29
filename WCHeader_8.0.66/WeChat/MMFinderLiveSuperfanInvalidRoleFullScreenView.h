@class UIImageView, MMUILabel, WCFinderHeadImageView;

@interface MMFinderLiveSuperfanInvalidRoleFullScreenView : MMFinderLiveForbidJoinLiveFullScreenView

@property (retain, nonatomic) UIImageView *infoImageView;
@property (retain, nonatomic) MMUILabel *nickLabel;
@property (retain, nonatomic) WCFinderHeadImageView *headImageView;
@property (copy, nonatomic) id /* block */ switchRoleCallback;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 liveTask:(id)a1;
- (void)notifyAppear;
- (void)notifyDisappear;
- (void)updateConfirmButtonTitleAndImage;
- (id)tipsLabelText;
- (id)tipsLabelFont;
- (BOOL)needAnchorInfo;
- (void)onConfirmButtonClicked;
- (void)layoutUI;
- (void)refreshUIWithCurrentRole;
- (void).cxx_destruct;

@end
