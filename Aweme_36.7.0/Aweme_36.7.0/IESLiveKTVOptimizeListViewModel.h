@class NSNumber, NSString, NSArray, PlaylistTab, IESLiveEmptyViewConfig, IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo, IESLiveKTVSongListActivityBannerCellItem;
@protocol IESLiveKTVOrderPanelProtocol;

@interface IESLiveKTVOptimizeListViewModel : NSObject

@property (nonatomic) BOOL hasMore;
@property (nonatomic) int firstLevelTab;
@property (nonatomic) BOOL needSort;
@property (copy, nonatomic) NSString *sortType;
@property (retain, nonatomic) IESLiveKTVSongListActivityBannerCellItem *bannerCellItem;
@property (retain, nonatomic) IESLiveLinkMicAudienceGetDynamicActivityLinksResponse_UrlInfo *activity;
@property (copy, nonatomic) NSString *lastItemId;
@property (nonatomic) BOOL isActivityExposed;
@property (nonatomic) BOOL isLocalPlaceholderTabs;
@property (retain, nonatomic) NSNumber *recentSectionIndex;
@property (retain, nonatomic) NSNumber *artistSectionIndex;
@property (copy, nonatomic) id /* block */ reloadDataCallback;
@property (copy, nonatomic) NSArray *sectionArray;
@property (copy, nonatomic) NSArray *musicArray;
@property (weak, nonatomic) id<IESLiveKTVOrderPanelProtocol> panelModel;
@property (readonly, nonatomic) PlaylistTab *category;
@property (readonly, nonatomic) IESLiveEmptyViewConfig *emptyConfig;
@property (retain, nonatomic) Class cellClass;

- (BOOL)isActivityTab;
- (void)addMusicToRecentListTopWithMusicId:(id)a0 source:(id)a1;
- (void)deleteFavoriteWithMusicId:(id)a0 source:(id)a1;
- (void)observeLinkedStateForBannerIfNeeded;
- (void)fetchDynamicActivity;
- (void)sortMusicListWithSortType:(id)a0 completion:(id /* block */)a1;
- (void)loadMusicListWithIsLoadMore:(BOOL)a0 completion:(id /* block */)a1;
- (void)combineMusicSectionWithMusicArray:(id)a0;
- (id)p_sortMusicListArrayWithMusicListArray:(id)a0 sortType:(id)a1;
- (void)p_combineMusicSectionWith:(id)a0;
- (void)trackActivityExposureEvent;
- (void)didSetActivityBannerUrls;
- (id)initWithPanelModel:(id)a0 category:(id)a1 firstLevelTab:(int)a2;
- (void)combineMusicSection;
- (void)loadDynamicActivityIfNeed;
- (void)addMusicToHotTabRecentListTopWithMusicId:(id)a0 source:(id)a1;
- (void).cxx_destruct;
- (void)cleanData;

@end
