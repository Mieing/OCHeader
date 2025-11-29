@class NSArray, NSString, AWEAwemeModel, NSMutableSet, NSMutableArray, AWEFeedCreationCardController;

@interface AWEFeedCreationCardMemoriesInterceptor : NSObject <PHPhotoLibraryChangeObserver, AWEFeedCreationCardInterceptorProtocol>

@property (weak, nonatomic) AWEFeedCreationCardController *cardController;
@property (copy, nonatomic) NSArray *aggregatedAssets;
@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSMutableSet *notifiedDeletedIDs;
@property (retain, nonatomic) NSMutableArray *pendingJSEvent;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL hasRegisteredPhotoLibraryNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)skipToday;
- (id)interceptWithExtraClientData;
- (void)interceptWithCardDidAppear:(id)a0 withAweme:(id)a1;
- (void)interceptWithPrecheckInsertTaskCompletion:(id /* block */)a0;
- (void)interceptWithInsertCard:(id /* block */)a0;
- (void)bindToCardController:(id)a0;
- (void)didEnteredMemoriesPlayer:(id)a0;
- (void)didMemoriesLocalAssetAuthorityChanged:(id)a0;
- (void)didHideMemoriesSkylight:(id)a0;
- (void)memoriesSwitchDidChange:(id)a0;
- (void)didApplicationBecomeActive;
- (BOOL)ignoreSkipToday;
- (BOOL)ignoreHasEnterMemoriesPlayerToday;
- (unsigned long long)coverCount;
- (BOOL)hasEnterMemoriesPlayerToday;
- (BOOL)isNearMidnight;
- (BOOL)needLocalAssets;
- (void)sendPendingJSEventIfNeeded;
- (void)deleteCardIfNeeded;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (id)init;

@end
