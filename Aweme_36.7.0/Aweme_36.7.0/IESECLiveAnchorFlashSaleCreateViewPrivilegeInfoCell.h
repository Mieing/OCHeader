@class UILabel, IESECLiveAnchorCreateFlashSalePrivilegeInfoModel, IESECButton;

@interface IESECLiveAnchorFlashSaleCreateViewPrivilegeInfoCell : IESECLiveAnchorFlashSaleCreateViewCell

@property (retain, nonatomic) UILabel *privilegeNameLabel;
@property (retain, nonatomic) IESECButton *redSelectButton;
@property (retain, nonatomic) UILabel *subMsgLabel;
@property (retain, nonatomic) IESECLiveAnchorCreateFlashSalePrivilegeInfoModel *model;

- (void)setItem:(id)a0 showWarn:(BOOL)a1;
- (void)p_setupCustomUI;
- (void)handleTapRedButton:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
