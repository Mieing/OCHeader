@class NSString, NSMutableArray, NSMutableDictionary;
@protocol MultiReaderMessageCellViewDelegate;

@interface MultiReaderMessageViewModel : ReaderMessageViewModel <RichTextLayoutDelegate, BrandPaySubcribeMgrExt, BrandFinderLiveDataWrapperExt, WCFinderLiveExt> {
    NSMutableArray *m_titleSizeArr;
    NSMutableDictionary *m_titleStyleDic;
    NSMutableArray *m_digestSizeArr;
    NSMutableDictionary *m_digestStyleDic;
    NSMutableDictionary *m_isPaidStateDic;
    NSMutableDictionary *m_pageIdentifier2IndexDic;
    BOOL m_isPaySubcribeOpen;
}

@property (weak, nonatomic) id<MultiReaderMessageCellViewDelegate> multiReaderMessageCellViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (double)messageNodeViewHeight;
- (double)appendNodeViewHeightIfIndex:(long long)a0;
- (double)articleTopItemViewHeight:(id)a0;
- (double)textTopItemViewHeight:(id)a0;
- (double)textNormalItemViewHeight:(id)a0 index:(unsigned int)a1;
- (double)heightForTopItemView;
- (id)genTingItemForIndex:(unsigned int)a0;
- (unsigned long long)musicSouceForIndex:(unsigned int)a0;
- (unsigned int)playLengthForIndex:(unsigned int)a0;
- (unsigned int)imageCountForIndex:(unsigned int)a0;
- (BOOL)showMultiImageStyleForIndex:(unsigned int)a0;
- (id)coverImageURLsForIndex:(unsigned int)a0;
- (id)getRichTextView:(double)a0 font:(id)a1;
- (id)itemLabelWithFont:(id)a0 width:(double)a1;
- (void)resetTextSize;
- (struct CGSize { double x0; double x1; })titleSizeOfIndex:(unsigned int)a0;
- (id)titleOfIndex:(unsigned int)a0;
- (id)titleStylesForIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })calculateTitleLabelSize:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })digestSizeOfIndex:(unsigned int)a0;
- (double)labelMaxWidthOfIndex:(unsigned int)a0;
- (unsigned long long)limitLineNumberOfIndex:(unsigned int)a0;
- (id)digestStylesForIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })calculateDigestLabelSize:(unsigned int)a0;
- (BOOL)isItemNoCover:(id)a0;
- (void)initPayStateIfNeed;
- (BOOL)isPayContentForIndex:(unsigned int)a0;
- (BOOL)canShowImageIconForIndex:(unsigned int)a0;
- (BOOL)isPaidForIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })payTagSizeForIndex:(unsigned int)a0;
- (id)paySubcribeTagImageForIndex:(unsigned int)a0;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)a0 fullUrl:(id)a1;
- (void)updatePayStatus:(BOOL)a0 pageIdentifier:(id)a1 index:(long long)a2;
- (void)updateTitleAtIndex:(long long)a0;
- (id)firstFinderLiveCardViewModel;
- (unsigned long long)firstBrandFinderLiveCardStyle;
- (double)finderLiveCardViewHeight;
- (BOOL)isBrandLiveContentShouldUseNewFinderCardViewStyleForIndex:(unsigned int)a0;
- (BOOL)isBrandLiveContentForIndex:(unsigned int)a0;
- (BOOL)isBrandLiveForIndex:(unsigned int)a0;
- (id)brandLiveStatusWordingForIndex:(unsigned int)a0;
- (struct CGSize { double x0; double x1; })brandLiveSizeForIndex:(unsigned int)a0;
- (BOOL)isYuanBaoPromotionForIndex:(unsigned int)a0;
- (void)doJumpToLiveRoom:(id)a0 forIndex:(unsigned int)a1;
- (BOOL)canForwardBrandLiveForIndex:(unsigned int)a0;
- (void)doForwardBrandLiveContent:(id)a0 forIndex:(unsigned int)a1;
- (void)fetchLiveDetailDataIfNeed;
- (void)fetchLiveStatusIfNeed;
- (void)fetchLiveStatusForIndex:(unsigned int)a0;
- (void)fetchDetailDataForIndex:(unsigned int)a0;
- (BOOL)isTXNewsMsg;
- (void)onLiveStatusChangedWithExportId:(id)a0;
- (void)onReplayStatusChangedWithExportId:(id)a0;
- (void)onRecommendReasonChangedWithExportId:(id)a0;
- (void)onFinderLiveCloseWithTid:(id)a0;
- (void)onFinderLiveReplayStatusUpdated:(id)a0 replayStatus:(unsigned int)a1;
- (BOOL)shouldOpenNewLineAtY:(double)a0 withLineHeight:(double)a1 richTextView:(id)a2;
- (void).cxx_destruct;

@end
