@class NSMutableArray, NSString, BrandFinderLiveCardViewModel, BrandFinderLiveDataWrapper;

@interface BrandProfileItemFinderLiveViewModel : BrandProfileItemBaseViewModel <BrandFinderLiveDataWrapperExt, WCFinderLiveExt>

@property (retain, nonatomic) BrandFinderLiveDataWrapper *liveDataWrapperCache;
@property (retain, nonatomic) NSMutableArray *liveTitleLabelStyles;
@property (nonatomic) struct CGSize { double width; double height; } liveTitleSize;
@property (readonly, nonatomic) BrandFinderLiveCardViewModel *cardViewModel;
@property (readonly, nonatomic) unsigned long long style;
@property (readonly, nonatomic) double normalCoverTopMargin;
@property (readonly, nonatomic) BOOL isBrandLiveContent;
@property (readonly, nonatomic) BOOL isBrandLive;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } brandLiveSize;
@property (readonly, copy, nonatomic) NSString *brandLiveStatusWording;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableViewCellClassName;
- (id)initWithItemMsg:(id)a0;
- (double)calCellHeight;
- (double)normalCoverBottomMargin;
- (id)coverImgURL;
- (id)title;
- (double)titleMaxWidth;
- (id)titleLabelStyles;
- (id)desc;
- (void)clearLayoutCache;
- (id)profileFinderLiveInfo;
- (id)finderLiveDataWrapper;
- (BOOL)shouldUseNewFinderCardViewStyle;
- (unsigned long long)finderLiveCardStyle;
- (id)finderLiveTitle;
- (id)finderCoverImgUrl;
- (void)fetchLiveStatus;
- (void)fetchLiveDetailData;
- (void)onLiveStatusChangedWithExportId:(id)a0;
- (void)onReplayStatusChangedWithExportId:(id)a0;
- (void)onRecommendReasonChangedWithExportId:(id)a0;
- (void)onRecommendReasonAvailableOrUnavailableWithExportId:(id)a0;
- (void)onFinderLiveCloseWithTid:(id)a0;
- (void)onFinderLiveReplayStatusUpdated:(id)a0 replayStatus:(unsigned int)a1;
- (void).cxx_destruct;

@end
