@class MMLRUCache, NSString;

@interface NewLifeIndependentMgr : MMUserService <IFavoritesExt, WCFinderFinderInitExt, MMServiceProtocol>

@property (retain, nonatomic) MMLRUCache *localGlobalFavFlagCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)updateLocalGlobalFavFlag:(BOOL)a0 forFavItem:(id)a1;
- (id)localGlobalFavFlagForFeedId:(id)a0;
- (void)onFinderInitSuccessful;
- (void)OnDelFavoritesItems:(id)a0;
- (void)OnAddNewFavoritesItems:(id)a0;
- (void).cxx_destruct;

@end
