@class NSString;

@interface AWEMVTemplatesFetchImpl : NSObject <ACCMVTemplatesFetchProtocol>

@property (readonly, copy, nonatomic) NSString *classicMvPannel;
@property (readonly, nonatomic) unsigned long long fetchCountPerRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchCutSameTemplateWithID:(id)a0 templateSource:(unsigned long long)a1 completion:(id /* block */)a2;
+ (void)counterCutsameTemplate:(id)a0;
+ (BOOL)p_needFetchNLETemplateURLForVersion:(id)a0;

- (void)fetchMVTemplatesCategoriesWithExtraParams:(id)a0 completion:(id /* block */)a1;
- (void)refreshMergedMVTemplatesWithCategory:(id)a0 extraParams:(id)a1 completion:(id /* block */)a2;
- (void)loadmoreMergedMVTemplatesWithCategory:(id)a0 cursor:(id)a1 sortedPosition:(id)a2 completion:(id /* block */)a3;
- (void)loadmoreMergedMVTemplatesWithCategory:(id)a0 extraParams:(id)a1 cursor:(id)a2 sortedPosition:(id)a3 completion:(id /* block */)a4;
- (void)refreshMergedFavoriteMVTemplatesCompletion:(id /* block */)a0;
- (void)loadmoreMergedFavoriteMVTemplatesWithCursor:(id)a0 longCursor:(id)a1 sortedPosition:(id)a2 completion:(id /* block */)a3;
- (void)getClassicalMVFavoriteStateWithTemplateIDs:(id)a0 simplify:(BOOL)a1 completion:(id /* block */)a2;
- (void)fetchTemplateWithTemplateId:(id)a0 templateType:(long long)a1 templateSource:(long long)a2 simplify:(BOOL)a3 completion:(id /* block */)a4;
- (void)fetchTemplateWithTemplateId:(id)a0 templateType:(long long)a1 simplify:(BOOL)a2 completion:(id /* block */)a3;
- (void)favoriteMVTemplateWithID:(unsigned long long)a0 templateType:(long long)a1 completion:(id /* block */)a2;
- (void)unFavoriteMVTemplateWithID:(unsigned long long)a0 templateType:(long long)a1 completion:(id /* block */)a2;
- (void)changeFavoriteXiangSuWithEffectIDs:(id)a0 favorite:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)changeFavoriteXiangSuWithEffectIDs:(id)a0 type:(long long)a1 favorite:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)commonRequestModel;
- (void)p_preProcessEffects:(id)a0;
- (void).cxx_destruct;

@end
