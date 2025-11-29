@class NSString, BrandFinderLiveCardViewModel;
@protocol BrandFinderLiveMessageCellViewDelegate;

@interface BrandFinderLiveMessageViewModel : BaseMessageViewModel <BrandFinderLiveDataWrapperExt, WCFinderLiveExt>

@property (nonatomic) BOOL isShouldLayout;
@property (weak, nonatomic) id<BrandFinderLiveMessageCellViewDelegate> finderLiveDelegate;
@property (readonly, nonatomic) BrandFinderLiveCardViewModel *cardViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (id)initWithMessageWrap:(id)a0 contact:(id)a1 chatContact:(id)a2;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)shouldLayoutIfNeeded;
- (id)accessibilityDescription;
- (struct CGSize { double x0; double x1; })brandFinderLiveMessageViewSize;
- (BOOL)shouldUseNewFinderCardViewStyle;
- (unsigned long long)finderLiveCardStyle;
- (id)liveDataWrapper;
- (void)doJumpToLiveRoom:(id)a0;
- (BOOL)canForward;
- (void)doForward:(id)a0;
- (void)fetchDetailData;
- (void)fetchLiveStatus;
- (void)onLiveStatusChangedWithExportId:(id)a0;
- (void)onReplayStatusChangedWithExportId:(id)a0;
- (void)onRecommendReasonChangedWithExportId:(id)a0;
- (void)onRecommendReasonAvailableOrUnavailableWithExportId:(id)a0;
- (void)onFinderLiveCloseWithTid:(id)a0;
- (void)onFinderLiveReplayStatusUpdated:(id)a0 replayStatus:(unsigned int)a1;
- (void).cxx_destruct;

@end
