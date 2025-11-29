@class IESWalletAuthCJViewModel, UILabel, IESWalletAuthCJPersonalInfo, IESWalletLinkAttributedLabel;

@interface IESWalletAuthCJMain : UIView

@property (readonly, copy) IESWalletAuthCJViewModel *model;
@property (retain, nonatomic) UILabel *requestLabel;
@property (retain, nonatomic) IESWalletAuthCJPersonalInfo *nameView;
@property (retain, nonatomic) IESWalletAuthCJPersonalInfo *IDView;
@property (retain, nonatomic) IESWalletLinkAttributedLabel *agreementView;

- (void)setupReuqest;
- (void)setupNameID;
- (void)setupAgreement;
- (void)autoAdjustHeight;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
