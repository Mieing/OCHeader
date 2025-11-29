@class NSString, NSMutableArray, MultiReaderMessageViewModel;

@interface MultiReaderMessageCellView : ReaderMessageCellView <ReaderItemViewDelegate, MultiReaderMessageCellViewDelegate, BrandFinderLiveBaseCardViewDelegate> {
    unsigned int m_selectIndex;
    NSMutableArray *m_itemViewArr;
}

@property (readonly, nonatomic) MultiReaderMessageViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (BOOL)canBeReused;
- (void)onAppear;
- (void)layoutContentView;
- (void)updateReaderItemViewTitleStyle:(id)a0 index:(int)a1;
- (void)updateReaderItemViewBrandLiveContentStyle:(id)a0 index:(int)a1;
- (id)itemViewWithShowtype:(long long)a0 index:(unsigned int)a1;
- (BOOL)isItemNoCover:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)handleMenuControllerWillHideMenuNotification:(id)a0;
- (void)onForward:(id)a0;
- (void)onFavorite:(id)a0;
- (void)onReaderItemBeginTouch:(unsigned int)a0;
- (void)onReaderItemClick:(unsigned int)a0 itemView:(id)a1;
- (void)jumpWeappOpWrap:(id)a0;
- (BOOL)readerItemCanShowLongPressMenu:(unsigned int)a0;
- (void)onReaderItemLongPress:(unsigned int)a0;
- (void)onReaderItemDidLoadCoverImage:(unsigned int)a0 coverImage:(id)a1 cover:(id)a2;
- (id)getReadWraps;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateView:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForLocation:(struct CGPoint { double x0; double x1; })a0 inCoordinateView:(id)a1;
- (void)brandFinderLiveBaseCardViewDidClick:(id)a0;
- (void)brandFinderLiveBaseCardViewDidLongClick:(id)a0;
- (void)multiReaderMessageCellViewLiveStatusChangedForIndex:(unsigned int)a0;
- (void)multiReaderMessageCellViewReplayStatusChangedForIndex:(unsigned int)a0;
- (void)multiReaderMessageCellViewRecommendReasonChangedForIndex:(unsigned int)a0;
- (void).cxx_destruct;

@end
