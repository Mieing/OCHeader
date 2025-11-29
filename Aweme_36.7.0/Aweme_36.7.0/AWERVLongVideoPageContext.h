@class NSString, AWELVideoAlbumHistoryInfoModel, AWERVLongVideoParamsModel, AWERVDetailPageContext, UIViewController;

@interface AWERVLongVideoPageContext : AWEPageContext

@property (weak, nonatomic) AWERVDetailPageContext *parentContext;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *highlightEpisodeID;
@property (nonatomic) BOOL showPaymentPanelAtFirstLoad;
@property (nonatomic) BOOL showPreviewEndMaskAtFirstLoad;
@property (nonatomic) BOOL shouldLoadWatchHistory;
@property (nonatomic) BOOL shouldLoadHighlight;
@property (nonatomic) BOOL isShowingPaymentView;
@property (nonatomic) BOOL isShowingDeviceLimitView;
@property (retain, nonatomic) AWELVideoAlbumHistoryInfoModel *bottomBarWatchHistory;
@property (weak, nonatomic) UIViewController *paymentViewController;
@property (nonatomic) BOOL isFirstLoadPayingInProgress;
@property (retain, nonatomic) AWERVLongVideoParamsModel *longVideoParams;

- (id)paymentSpuID:(id)a0;
- (id)paymentSpuType:(id)a0;
- (id)paymentEpisodeID:(id)a0;
- (id)paymentEpisodeRank:(id)a0;
- (id)paymentTrailStatus:(id)a0;
- (id)paymentCommonParams:(id)a0;
- (void).cxx_destruct;

@end
