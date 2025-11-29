@class NSArray, NSDictionary, NSString, AWEBinding;

@interface ACCSideslipPropPanelFavoriteCapabilityImpl : NSObject <ACCSideslipPropPanelFavoriteCapability>

@property (copy, nonatomic) NSArray *favoriteGenericEffectArray;
@property (retain, nonatomic) NSDictionary *favoriteGenericEffectDict;
@property (retain, nonatomic) NSString *panelName;
@property (nonatomic) long long topLevelCategoryID;
@property (retain, nonatomic) AWEBinding *favoriteListDataChangedSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonRequestModel;
- (id)initWithPanelName:(id)a0 topLevelCategoryID:(long long)a1;
- (void)updateFavoriteStatus:(BOOL)a0 effectRawModel:(id)a1 scene:(unsigned long long)a2 completion:(id /* block */)a3;
- (BOOL)isFavorite:(id)a0;
- (BOOL)isFavorite:(id)a0 limitEffectType:(BOOL)a1;
- (id)currentFavoriteModelList;
- (void)mergeToFavoriteArray:(id)a0;
- (BOOL)addEffectModelToFavorite:(id)a0;
- (BOOL)removeEffectModelToFavorite:(id)a0;
- (void)changeFavoriteXiangSuWithEffectIDs:(id)a0 templateType:(unsigned long long)a1 favorite:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)getTemplateId:(id)a0;
- (void)changeFavoriteCutSameWithEffectIDs:(id)a0 favorite:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
