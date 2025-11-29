@class CJPayUnifyInstallCertViewModel, CJPayStandardButton, CJPayImageView, CJPayButton, CJPayLabel, NSString;

@interface CJPayUnifyInstallCertView : UIView <CJPayBaseLoadingProtocol>

@property (nonatomic) BOOL isInstallingCert;
@property (retain, nonatomic) CJPayImageView *iconImageView;
@property (retain, nonatomic) CJPayLabel *titleLabel;
@property (retain, nonatomic) CJPayLabel *subTitleLabel;
@property (retain, nonatomic) CJPayStandardButton *confirmBtn;
@property (retain, nonatomic) CJPayButton *cancelBtn;
@property (retain, nonatomic) CJPayUnifyInstallCertViewModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_clickConfirmBtn;
- (void)p_updateContentInNormalStatus;
- (void)p_updateContentInLoadingStatus;
- (id)p_updateInstallProgressRatio:(id)a0;
- (void)p_clickCancelBtn;
- (void)startInstallProcess;
- (void)exitInstallProcess;
- (void)finishInstallProcess;
- (void)updateInstallProgress:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (void)startLoading;
- (void)stopLoading;

@end
