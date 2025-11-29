@class UIView, AWEPaySKMCodeImageView, AWEPaySKMCreateCodeLoading, UIImageView, UIButton, AWEPayIconNameStackView, AWEPayLoadingButton, UILabel, AWEPayAmountLabel;

@interface AWEPaySKMMainView : UITableViewCell

@property (retain, nonatomic) AWEPayIconNameStackView *iconNameView;
@property (retain, nonatomic) UIView *backContainerView;
@property (retain, nonatomic) UIView *topContainerView;
@property (retain, nonatomic) UIImageView *userIconImageView;
@property (retain, nonatomic) AWEPaySKMCodeImageView *qrCodeImageView;
@property (retain, nonatomic) UIView *functionsView;
@property (copy, nonatomic) id /* block */ didClickBtn;
@property (copy, nonatomic) id /* block */ reportEvent;
@property (retain, nonatomic) AWEPayAmountLabel *amountLabel;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UILabel *errorTipsLabel;
@property (retain, nonatomic) UIButton *retryBtn;
@property (retain, nonatomic) UIButton *amountSetBtn;
@property (retain, nonatomic) AWEPayLoadingButton *saveCodeBtn;
@property (retain, nonatomic) AWEPayLoadingButton *audioSwitchBtn;
@property (nonatomic) BOOL isAudioSwitchOn;
@property (retain, nonatomic) AWEPaySKMCreateCodeLoading *qrCodeLoading;
@property (nonatomic) BOOL isQRCodeLoading;

+ (double)getHeightWithCodeModel:(id)a0;

- (void)didClickFunctionBtn:(id)a0;
- (void)setNormalViewHidden:(BOOL)a0;
- (void)showError:(BOOL)a0 codeModel:(id)a1 style:(unsigned long long)a2;
- (void)audioSwitchDidClickWithLoading:(BOOL)a0;
- (void)setupFunctionsUI;
- (void)updateQRCode:(id)a0 codeModel:(id)a1 errorStyle:(unsigned long long)a2;
- (void)updateVoiceSwitchStatusTrySet:(BOOL)a0;
- (void)setUserIconUrl:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)startLoading;
- (void)stopLoading;
- (void)setupUI;

@end
