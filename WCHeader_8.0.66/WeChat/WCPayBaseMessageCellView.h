@class UILabel, UIImageView, WCPayBaseMessageViewModel;

@interface WCPayBaseMessageCellView : CommonMessageCellView {
    UILabel *m_descLabel;
    UILabel *m_titleLabel;
    UIImageView *m_iconView;
}

@property (retain, nonatomic) WCPayBaseMessageViewModel *viewModel;

- (void)layoutContentView;
- (BOOL)canAdjustsFontSizeToFitWidth;
- (void)initTitleLabel;
- (void)initDescLabel;
- (void)initIconView;
- (void)onTouchUpInside;
- (BOOL)disableImplicitAnimations;
- (void).cxx_destruct;

@end
