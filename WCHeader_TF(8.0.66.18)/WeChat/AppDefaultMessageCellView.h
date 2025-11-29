@class UIImageView, AppDefaultMessageViewModel, UILabel;

@interface AppDefaultMessageCellView : CommonMessageCellView {
    UIImageView *m_thumbImageView;
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
}

@property (readonly, nonatomic) AppDefaultMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDescLabel;
- (void)addThumbImageView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)updateThumbImage;
- (void).cxx_destruct;

@end
