@class UILabel, BrandEcsPrivateMsgViewModel, MMBrandHeadImageView;

@interface BrandEcsPrivateMsgCellView : BaseMessageCellView {
    MMBrandHeadImageView *m_headerView;
    UILabel *m_digestLabel;
    UILabel *m_checkLabel;
}

@property (readonly, nonatomic) BrandEcsPrivateMsgViewModel *viewModel;

- (BOOL)canBeReused;
- (BOOL)canShowMoreMenuItem;
- (void)layoutInternal;
- (void)onTouchUpInside;
- (id)itemLabelWithTitle:(id)a0 width:(double)a1 font:(id)a2;
- (void)layoutDigestLabel;
- (void)onAppear;
- (void)report32229:(BOOL)a0;
- (void).cxx_destruct;

@end
