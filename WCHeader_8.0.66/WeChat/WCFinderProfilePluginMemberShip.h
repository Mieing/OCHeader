@class NSString, AnyPromise, WCFinderFeedArray, WCFinderProfileOverviewSection;

@interface WCFinderProfilePluginMemberShip : WCFinderStreamProfilePluginBase <WCFinderStreamProfileExt, WCFinderMembershipFollowInfoExt, WCFinderPostDataItemExt, WCFinderDataItemExt>

@property (retain, nonatomic) WCFinderFeedArray *feedArray;
@property (retain, nonatomic) AnyPromise *firstPageFetcher;
@property (retain, nonatomic) WCFinderProfileOverviewSection *overview;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)pluginEnable:(id)a0;
+ (id)overviewSectionTypes;

- (void)dealloc;
- (void)setHeadData:(id)a0;
- (void)_updateMemberShipOverviewSection:(id)a0 cnt:(long long)a1 fillCache:(BOOL)a2;
- (void)requestPageData;
- (void)fetchData:(BOOL)a0;
- (id)appendLocalPostingDataItems:(id)a0 isAuthor:(BOOL)a1 username:(id)a2;
- (void)onProfileExtInfoMemberShipInfoChanged;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)a0;
- (void)refetchFeeds;
- (BOOL)enableReceivePostDataItem:(id)a0;
- (void)onMemberShipFeedPostSessionUpLoadFailWithTid:(id)a0 errorType:(long long)a1;
- (void)onMemberShipFeedPostSessionUpLoadSuccessful:(id)a0;
- (void)onMemberShipFeedPostSessionStartUpload:(id)a0;
- (void)insertPostDataItem:(id)a0 tid:(id)a1;
- (void)onFinderDataItemDelete:(id)a0;
- (void).cxx_destruct;

@end
