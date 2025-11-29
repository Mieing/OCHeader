@class NSString, UIImageView, AppGiftCardMessageViewModel, UILabel, MMWebImageView;

@interface AppGiftCardMessageCellView : CommonMessageCellView <MMWebImageViewDelegate> {
    UILabel *m_titleLabel;
    UILabel *m_descLabel;
    UIImageView *m_thumbImageView;
    MMWebImageView *m_blurBgImageView;
    BOOL _isBlurBgImageLoad;
}

@property (readonly, nonatomic) AppGiftCardMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)initThumbImageView;
- (void)initBlurBgImageView;
- (double)calBlurImageHeight;
- (void)updateThumbImage;
- (void)onLoadImageOK:(id)a0;
- (void)onTouchUpInside;
- (void).cxx_destruct;

@end
