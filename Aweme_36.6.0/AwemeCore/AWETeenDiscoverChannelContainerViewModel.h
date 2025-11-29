@class AWETeenDiscoverChannelContext, NSString, AWETeenDiscoverHistorySectionViewModel, AWETeenDiscoverListDataController, NSDate, AWETeenDiscoverGroupSectionViewModel, AWETeenDiscoverySingleVideoSectionViewModel, AWETeenDiscoverWaterfallSectionViewModel;

@interface AWETeenDiscoverChannelContainerViewModel : AWEBaseListViewModel <AWETeenAlbumMessage>

@property (retain, nonatomic) AWETeenDiscoverListDataController *dataController;
@property (retain, nonatomic) AWETeenDiscoverHistorySectionViewModel *historyViewModel;
@property (retain, nonatomic) AWETeenDiscoverGroupSectionViewModel *groupViewModel;
@property (retain, nonatomic) AWETeenDiscoverWaterfallSectionViewModel *columnViewModel;
@property (retain, nonatomic) AWETeenDiscoverySingleVideoSectionViewModel *singleVideoViewModel;
@property (nonatomic) BOOL showBanner;
@property (nonatomic) BOOL showAgeSettigAlert;
@property (copy, nonatomic) NSString *bannerLeftString;
@property (copy, nonatomic) NSString *bannerRightString;
@property (nonatomic) BOOL bannerStringSuccess;
@property (nonatomic) BOOL isRefreshing;
@property (retain, nonatomic) AWETeenDiscoverChannelContext *context;
@property (nonatomic) BOOL hadShowAgeSettingAlert;
@property (retain, nonatomic) NSDate *pageStartDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (void)p_initFetch;
- (void)updateWatchedAlbumModel:(id)a0;
- (void)updateWithChannelModel:(id)a0 channelIndex:(unsigned long long)a1 channalTopResouceHighlight:(BOOL)a2;
- (void)trackViewDisAppear;
- (void)trackViewAppear;
- (void)refreshListData;
- (void)p_fetchRecentWatched;
- (BOOL)p_shouldShowAgeSettingAlert;
- (void)p_recordAgeSettingAlert;
- (BOOL)p_shouldShowAgeSettingBanner;
- (id)p_storeID;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)dealloc;

@end
