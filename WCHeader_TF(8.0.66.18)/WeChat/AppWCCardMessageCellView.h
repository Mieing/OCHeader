@class AppWCCardMessageViewModel, UIImageView, MMProgressView, UIView, UILabel;

@interface AppWCCardMessageCellView : CommonMessageCellView {
    MMProgressView *m_progressView;
    UIView *m_progressBkgView;
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
    UIImageView *m_thumbImageView;
}

@property (readonly, nonatomic) AppWCCardMessageViewModel *viewModel;

- (void)layoutContentView;
- (void)initThumbImageView;
- (void)updateStatus;
- (void)updateThumbImage;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
