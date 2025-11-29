@class UIButton, NSString, IESLiveChargeViewModel, UIImageView, UIView, IESLiveGradientView, UILabel;

@interface IESLiveChargeViewNoticeComponent : UIView <IESLiveChargeViewComponent>

@property (nonatomic) double width;
@property (retain, nonatomic) IESLiveChargeViewModel *viewModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveGradientView *backgroundGradientView;
@property (retain, nonatomic) UILabel *tipTextLabel;
@property (retain, nonatomic) UIButton *closeTipButton;
@property (retain, nonatomic) UIImageView *tipImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)closeButtonIsClicked;
- (void).cxx_destruct;
- (void)reload;
- (id)initWithWidth:(double)a0;
- (void)setupUI;
- (double)viewHeight;

@end
