@interface AWEMixVideoRefactorDataService : NSObject

+ (void)requestMixVideoDetailInfo:(id)a0 skipLocalCache:(BOOL)a1 completeBlock:(id /* block */)a2;
+ (void)requestMixTabWithUserID:(id)a0 cursor:(id)a1 mixCount:(id)a2 awemeCount:(id)a3 currMixID:(id)a4 startEpisode:(id)a5 completeBlock:(id /* block */)a6;
+ (void)requestRecommendMixTabWithCursor:(id)a0 mixCount:(id)a1 authorID:(id)a2 awemeCount:(id)a3 curMixID:(id)a4 curItemID:(id)a5 scene:(id)a6 completeBlock:(id /* block */)a7;
+ (id)shareInstance;

@end
