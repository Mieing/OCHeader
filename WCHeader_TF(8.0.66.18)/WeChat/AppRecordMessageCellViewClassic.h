@class UILabel, AppRecordMessageViewModelClassic;

@interface AppRecordMessageCellViewClassic : CommonMessageCellView {
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
}

@property (readonly, nonatomic) AppRecordMessageViewModelClassic *viewModel;

- (void)layoutContentView;
- (void)initTitleLabel;
- (void)initDescLabel;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
