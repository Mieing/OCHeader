@class NSString;

@interface AWEKnowledgeOCModuleService : HTSService <AWEKnowledgeOCModuleService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showChallengeDetailHalfScreenOnVC:(id)a0 challengeID:(id)a1 challengeName:(id)a2 isCommerce:(BOOL)a3 completion:(id /* block */)a4 dismissBlock:(id /* block */)a5;
- (void)requestChallengeItemWithID:(id)a0 isCommerce:(BOOL)a1 completion:(id /* block */)a2;
- (void)requestChallengeItemsWithIDArray:(id)a0 completion:(id /* block */)a1;
- (void)requestTaskItemWithID:(id)a0 completion:(id /* block */)a1;
- (id)createPaginatedProgressController;
- (BOOL)feedAlbumNeedShowTagWithAwemeModel:(id)a0;
- (void)requestChallengeItemWithName:(id)a0 isCommerce:(BOOL)a1 completion:(id /* block */)a2;
- (id)showChallengeDetailHalfScreenMediaOnVC:(id)a0 challengeID:(id)a1 challengeName:(id)a2 isCommerce:(BOOL)a3 height:(double)a4 completion:(id /* block */)a5 dismissBlock:(id /* block */)a6;
- (BOOL)newStyleTypeIconAndWordingEnable;
- (BOOL)shouldReduceHotZoneForNoteProgressViewWith:(id)a0;
- (id)newChallengeDetailDescView;
- (id)challengeListDataController;
- (void)collectTrendsAllMaterialsWithPayload:(id)a0 completion:(id /* block */)a1;
- (id)getChallengeImagePriviewControllerForModel:(id)a0;
- (id)detailTableViewControllerWithExamples:(id)a0 indexPath:(id)a1 referString:(id)a2;
- (id)filterDictByKeys:(id)a0 dict:(id)a1;

@end
