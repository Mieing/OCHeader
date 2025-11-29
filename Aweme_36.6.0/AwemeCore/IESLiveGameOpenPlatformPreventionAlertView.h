@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface IESLiveGameOpenPlatformPreventionAlertView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *subTitleStr;
@property (copy, nonatomic) NSString *descStr;
@property (retain, nonatomic) UILabel *mainTitleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *nameIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImageView *cardIcon;
@property (retain, nonatomic) UILabel *cardLabel;
@property (retain, nonatomic) UIView *colLineView;
@property (retain, nonatomic) UIButton *refuseBtn;
@property (retain, nonatomic) UIButton *certificateBtn;
@property (retain, nonatomic) UIView *btnLineView;
@property (copy, nonatomic) id /* block */ certificateBlock;
@property (copy, nonatomic) id /* block */ refuseBlock;
@property (copy, nonatomic) NSString *appId;

- (void)setupCommonUI;
- (void)setupCertificateUI;
- (void)refuseBtnDidClick;
- (void)certificateBtnDidClick;
- (void)layoutCertificateUI;
- (void)layoutCommonUI;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subTitle:(id)a1;

@end
