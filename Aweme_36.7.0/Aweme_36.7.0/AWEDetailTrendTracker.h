@class NSString, NSMutableSet, AWEDetailTrendViewModel;
@protocol AWEDetailMusicListViewModelProtocol;

@interface AWEDetailTrendTracker : NSObject <AWEDetailTrendTrackerService>

@property (retain, nonatomic) AWEDetailTrendViewModel *viewModel;
@property (weak, nonatomic) id<AWEDetailMusicListViewModelProtocol> musicListDataContext;
@property (nonatomic) BOOL ifFirstAwemeCellLoadHasTracked;
@property (nonatomic) BOOL ifFirstAwemeCellCoverLoadHasTracked;
@property (nonatomic) BOOL ifFirstTrendsMaterialCellLoadHasTracked;
@property (nonatomic) BOOL ifFirstTrendsMaterialCoverLoadHasTracked;
@property (retain, nonatomic) NSMutableSet *hasTrackedShowItemID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackEnterFrom;
- (void)trackDetailPageClientShowWithModel:(id)a0;
- (void)trackDetailPageClientCloseWithVideoNum:(long long)a0;
- (void)trackCollect:(BOOL)a0;
- (void)trackWhenAwemeListDidLoadFirstTimeIfNeeded;
- (void)trackCoverLoadWithModel:(id)a0 index:(long long)a1 duration:(double)a2 error:(id)a3;
- (void)trackCardShowWithModel:(id)a0 index:(long long)a1;
- (void)trackFeedEnterWithModel:(id)a0 index:(long long)a1;
- (id)tagCommonTrackParamsWithJsonString:(id)a0;
- (id)initWitServiceProvider:(id)a0;
- (void)trackWhenLunaUGButtonClicked;
- (void)trackWhenLunaUGButtonClickedWithViewModel:(id)a0;
- (void)detailTrendTrackWithEvent:(id)a0 paramDict:(id)a1;
- (void)trackWhenMusicCardShow;
- (void)trackPlayMusic;
- (void)trackWhenMusicCardClickedForClickType:(unsigned long long)a0;
- (void)trackWhenMusicCollectButtonClickedWithItemViewModel:(id)a0 toCollectStatus:(BOOL)a1;
- (void)trackWhenEnterMusicDetailPageWithItemViewModel:(id)a0 extraParams:(id)a1;
- (void)trackWhenShareTrendButtonClicked;
- (void)trackEnterTrendDetail;
- (void)trackEnterTrendDetailFinish;
- (void)trackMaterialsShowWithMaterialModel:(id)a0 indexPath:(id)a1;
- (void)trackMaterialsClickWithMaterialModel:(id)a0 indexPath:(id)a1 clickType:(unsigned long long)a2;
- (void)trackMusicRegionHorizontalScroll;
- (void)trackMaterialRegionHorizontalScroll;
- (void)trackTagClick;
- (void)trackFavoriteNoticeEvent:(id)a0;
- (void)trackFlashFavoriteNoticeEvent:(id)a0;
- (void)trackWhenTrendsMaterialCellFirstCoverDidLoadIfNeeded;
- (void)trackWhenTrendsMaterialCellDidLoadIfNeeded;
- (void)trackMusicCollectPerformanceWithMusicItemViewModel:(id)a0 toCollect:(BOOL)a1 extraParams:(id)a2;
- (void)trackTrendsCollectPerformanceWithToCollect:(BOOL)a0 extraParams:(id)a1;
- (void)trackMaterialsClickWithMaterialModel:(id)a0 paramDict:(id)a1 clickType:(unsigned long long)a2;
- (void)trackMaterialsClickEnterDetailWithMaterialModel:(id)a0 paramDict:(id)a1;
- (void).cxx_destruct;

@end
