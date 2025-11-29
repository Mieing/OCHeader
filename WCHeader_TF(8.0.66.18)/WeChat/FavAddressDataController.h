@class WALocationGetter, NSString, NSDictionary, FavSearchHelper, NSMutableArray, CLLocation;
@protocol FavAddressDataControllerDelegate;

@interface FavAddressDataController : NSObject <WALocationGetterDelegate, FavSearchHelperDelegate, IFavoritesExt, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSMutableArray *arrClassDatas;
@property (retain, nonatomic) WALocationGetter *locationGetter;
@property (retain, nonatomic) NSDictionary *dicCurrentLocationName;
@property (nonatomic) BOOL hasSetCurrentLocation;
@property (retain, nonatomic) FavSearchHelper *favSearchHelper;
@property (retain, nonatomic) CLLocation *currentLocation;
@property (nonatomic) BOOL dataLoadComplete;
@property (retain, nonatomic) NSMutableArray *arrDataWraps;
@property (weak, nonatomic) id<FavAddressDataControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)markDataLoadComplete;
- (void)clearData;
- (void)classifyFilterDataAddress;
- (id)getCountryOfDataItem:(id)a0;
- (id)getCityOfDataItem:(id)a0;
- (void)retrieveLocation;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)genAddressCellView:(id)a0 indexPath:(id)a1 inTableView:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (void)onFindArrAddress;
- (void)onFindAddress:(id)a0;
- (void)onGetLocationSuccess:(id)a0;
- (void)onGetLocationFailedWithReason:(unsigned long long)a0;
- (void)OnDelFavoritesItems:(id)a0;
- (void).cxx_destruct;

@end
