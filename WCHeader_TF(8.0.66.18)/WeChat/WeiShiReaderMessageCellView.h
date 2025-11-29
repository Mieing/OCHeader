@class NSString, WeShiReaderItemView, WeiShiReaderMessageViewModel;

@interface WeiShiReaderMessageCellView : BaseMessageCellView <WeiShiReaderItemViewDelegate, WeiShiMsgCardMenuDelegate> {
    WeShiReaderItemView *itemView;
}

@property (readonly, nonatomic) WeiShiReaderMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (BOOL)canBeReused;
- (void)layoutContentView;
- (BOOL)bShouldReportShowInfo;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)getReadWraps;
- (BOOL)canPeek;
- (BOOL)canCellShowOperationMenu;
- (id)getCurrentViewController;
- (id)webViewExtraInfoWithReaderWrap:(id)a0 msgWrap:(id)a1;
- (id)getWebViewController:(id)a0 url:(id)a1;
- (void)onReaderItemClick:(unsigned int)a0 itemView:(id)a1;
- (id)getMenuItems;
- (void)onFavoriteMenu:(id)a0;
- (void)onForwardMenu:(id)a0;
- (void)onMoreMenu:(id)a0;
- (void)onAppear;
- (void)doWeishiRepor:(unsigned int)a0 topNewsTitle:(id)a1 readerWrap:(id)a2;
- (void).cxx_destruct;

@end
