@class NSString;

@interface AWEFavoriteManager : NSObject <AWEFavoriteManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reloadFavoriteDataIfNeeded:(id)a0;
+ (id)sharedInstance;

- (BOOL)showMixCollectionList;
- (void)requestRawFavoriteItemWithConfig:(id)a0 completion:(id /* block */)a1;
- (id)p_getUrlStringWithType:(unsigned long long)a0;
- (id)p_getParamsWithID:(id)a0 extraID:(id)a1 type:(unsigned long long)a2 action:(unsigned long long)a3 enterFrom:(id)a4 extraParams:(id)a5 model:(id)a6;
- (BOOL)shouldShowMixsCollectionList;
- (id)createListDataControllerWithType:(unsigned long long)a0;
- (void)requestFavoriteItemWithID:(id)a0 type:(unsigned long long)a1 action:(unsigned long long)a2 completion:(id /* block */)a3;

@end
