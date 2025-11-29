@class MMBrandHeadImageView, MMUIImageView, AttributedReaderMessageViewModel, UIView, MMWebImageView, UIImageView, CTRichTextView, MMUIButton;

@interface AttributedReaderMessageCellView : ReaderMessageCellView {
    UIView *m_lineViewTop;
    UIView *m_lineViewBot;
    CTRichTextView *m_digestView;
    UIImageView *m_bgImageView;
    MMUIImageView *m_headerMenuImage;
    MMUIButton *m_headerMenuButton;
    MMBrandHeadImageView *m_headerView;
    MMWebImageView *m_rightCoverImageView;
}

@property (readonly, nonatomic) AttributedReaderMessageViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (BOOL)canBeReused;
- (void)onAppear;
- (void)layoutContentView;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)addCornerToContentView;
- (void)initBgImageView;
- (void)initDigestView;
- (BOOL)isNeedHeaderMenuButton;
- (void)layoutHeaderMenuButtonIfNeedOnCenterY:(double)a0;
- (void)onHeadImageClick;
- (void)onClicked;
- (void)jumpWeappOpWrap:(id)a0;
- (void)onMoreButton:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)onExpose;
- (id)operationMenuItems;
- (BOOL)canShowMoreMenuItem;
- (BOOL)isAccessibilityElement;
- (void)reportReaderTemplateMsgFold:(long long)a0;
- (void).cxx_destruct;

@end
