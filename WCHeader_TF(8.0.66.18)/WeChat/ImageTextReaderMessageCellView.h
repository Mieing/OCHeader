@class ImageTextReaderMessageViewModel, UIImageView;

@interface ImageTextReaderMessageCellView : ReaderMessageCellView {
    UIImageView *m_bgImageView;
}

@property (readonly, nonatomic) ImageTextReaderMessageViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (BOOL)canBeReused;
- (void)onAppear;
- (void)layoutContentView;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)onHeadImageClick;
- (void)onOPButtonClicked:(id)a0;
- (void)onClicked;
- (void)jumpWeappOpWrap:(id)a0;
- (void)jumpOpItem:(id)a0;
- (void)forwardMessage;
- (void)addFavorite;
- (id)operationMenuItems;
- (void).cxx_destruct;

@end
