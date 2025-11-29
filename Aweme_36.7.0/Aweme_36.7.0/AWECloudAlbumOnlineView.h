@class NSString, UIImageView, UILabel, UIView, ACCButton;
@protocol AWECloudAlbumPopupVCProtocol;

@interface AWECloudAlbumOnlineView : UIView <AWECloudAlbumPopupContentViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *psFlagImageView;
@property (retain, nonatomic) UILabel *psTitleLabel;
@property (retain, nonatomic) UILabel *psContentLabel;
@property (retain, nonatomic) UIImageView *hdFlagImageView;
@property (retain, nonatomic) UILabel *hdTitleLabel;
@property (retain, nonatomic) UILabel *hdContentLabel;
@property (retain, nonatomic) UIImageView *saFlagImageView;
@property (retain, nonatomic) UILabel *saTitleLabel;
@property (retain, nonatomic) UILabel *saContentLabel;
@property (retain, nonatomic) UIView *separatedLine;
@property (retain, nonatomic) UILabel *agreementLabel;
@property (retain, nonatomic) UIView *agreementBGView;
@property (retain, nonatomic) ACCButton *agreementMoreButton;
@property (retain, nonatomic) UILabel *uploadAgreementLabel;
@property (retain, nonatomic) ACCButton *serviceAgreementButton;
@property (retain, nonatomic) ACCButton *refuseButton;
@property (retain, nonatomic) ACCButton *agreeButton;
@property (copy, nonatomic) id /* block */ refuseAction;
@property (copy, nonatomic) id /* block */ agreeAction;
@property (weak, nonatomic) id<AWECloudAlbumPopupVCProtocol> delegate;
@property (nonatomic) BOOL needPanGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_showAgreementAlertView;
- (void)serviceAgreementAction:(id)a0;
- (void)agreeClickAction:(id)a0;
- (void)agreementMoreAction:(id)a0;
- (id)uploadContentText;
- (void)uploadAgreementMoreAction:(id)a0;
- (void)refuseClickAction:(id)a0;
- (void)cancleAction;
- (id)initWithRefuseAction:(id /* block */)a0 agreeAction:(id /* block */)a1;
- (void).cxx_destruct;
- (void)setupUI;
- (double)contentViewHeight;

@end
