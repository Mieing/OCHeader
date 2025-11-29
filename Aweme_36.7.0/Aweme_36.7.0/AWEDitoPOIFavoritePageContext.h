@class DitoEvent, NSString, NSDictionary, DitoMultiTabDataModel, NSArray, AWEDitoPOIFavoriteLabelsDataModel, AWEDitoPOIFavoriteSelectorModel;

@interface AWEDitoPOIFavoritePageContext : DitoGeneralContainerPageContext

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *extraParamsForTrack;
@property (copy, nonatomic) NSString *selectedKey;
@property (retain, nonatomic) DitoMultiTabDataModel *tabModel;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long sortType;
@property (retain, nonatomic) AWEDitoPOIFavoriteSelectorModel *loc1SelectorData;
@property (retain, nonatomic) AWEDitoPOIFavoriteSelectorModel *loc2SelectorData;
@property (retain, nonatomic) AWEDitoPOIFavoriteSelectorModel *typeSelectorData;
@property (copy, nonatomic) NSArray *locationSelDatas;
@property (copy, nonatomic) NSArray *typeSelDatas;
@property (copy, nonatomic) NSArray *sortItemsArray;
@property (copy, nonatomic) NSString *defaultLocSelectorType;
@property (copy, nonatomic) NSString *defaultTypeSelectorType;
@property (copy, nonatomic) NSString *longitude;
@property (copy, nonatomic) NSString *latitude;
@property (copy, nonatomic) NSString *locFilterTitle;
@property (copy, nonatomic) NSString *typeFilterTitle;
@property (readonly, nonatomic) BOOL isFromPersonalMultiTab;
@property (readonly, nonatomic) BOOL isFromOtherPersonProfile;
@property (readonly, nonatomic) BOOL isPreviousPagePersonal;
@property (readonly, nonatomic) BOOL isPreviousPageOthers;
@property (copy, nonatomic) NSString *previousEnterFrom;
@property (copy, nonatomic) NSString *previousEnterMethod;
@property (copy, nonatomic) NSDictionary *nearbyCommonTrackParams;
@property (copy, nonatomic) NSDictionary *lifeTrackParamsInToPoiGoods;
@property (copy, nonatomic) NSDictionary *lifeExtraInfoInToPoiGoods;
@property (nonatomic) BOOL isFavoriteVCAppeared;
@property (nonatomic) BOOL shouldResetBodyContainer;
@property (retain, nonatomic) AWEDitoPOIFavoriteLabelsDataModel *labelsData;
@property (retain, nonatomic) DitoEvent *lastFilterOrLabelsChangEvent;

- (id)referString;
- (void)setRouterParams:(id)a0;
- (id)fetchTabNameForTrackWithPageKey:(id)a0;
- (long long)getCallVideoTabCase;
- (void)requestPermissionWithCallback:(id /* block */)a0;
- (void)didChangeFilterOrLabelsWithEvent:(id)a0;
- (void)getLocationIfNeededWithCallback:(id /* block */)a0;
- (id)aweNearbyModuleService;
- (id)p_alertTitle;
- (id)p_alertDescription;
- (id)getCurrentPageKey;
- (BOOL)isMixNewStyle;
- (id)filterOptionString;
- (id)sortOptionString;
- (id)shortcutTrackParams;
- (id)fetchCurrentSelectedShortcut;
- (BOOL)requestNeedLocationPermission;
- (id)fetchSelectedLabelsString;
- (void)updateCurrenTabModel:(id)a0;
- (id)currentCacheKey;
- (void)resetFilterAndLabelsStatus;
- (id)requestBizParams;
- (BOOL)isMultiTabContainer;
- (void)trackSloganShow;
- (BOOL)isLoginUser;
- (void).cxx_destruct;
- (id)init;
- (id)requestParams;

@end
