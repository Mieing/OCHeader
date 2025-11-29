@class MMCopyLabel;
@protocol SettingModifyAliasProtocolHeadViewDelegate;

@interface SettingModifyAliasProtocolHeadView : MMAcceptAgreementCommonHeadView <MMCopyLabelDelegate>

@property (weak, nonatomic) id<SettingModifyAliasProtocolHeadViewDelegate> m_delegate;
@property (retain, nonatomic) MMCopyLabel *m_aliasLabel;

- (void)updateViewWithLogoSVGImage:(id)a0 headContact:(id)a1 headTitle:(id)a2 headContent:(id)a3;
- (void)onLabelLongPress:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
