@class AWERelatedVideoDataManager, NSString, NSDictionary, AWEAwemeModel, AWERVDetailPageContext, NSMutableArray;

@interface AWERelatedVideoTabDataSyncManager : NSObject

@property (retain, nonatomic) NSMutableArray *dataManagers;
@property (retain, nonatomic) AWERelatedVideoDataManager *sameAuthorPostDataManager;
@property (nonatomic) long long dataState;
@property (weak, nonatomic) AWERVDetailPageContext *pageContext;
@property (nonatomic) long long selectedDataManagerIndex;
@property (retain, nonatomic) AWERelatedVideoDataManager *relatedVideoDataManager;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *scene;

- (void)updateSuggestWords:(id)a0;
- (void)selectIndex:(long long)a0 word:(id)a1;
- (BOOL)isAtRelatedTab;
- (void)resetWithAwemeModel:(id)a0 params:(id)a1;
- (void)getSuggestWordsWithItemID:(id)a0 didGetSuggestWordsBlock:(id /* block */)a1;
- (id)multiTabWords;
- (BOOL)isAtSameAuthor;
- (void)updateRelatedVideoDataManager:(id)a0;
- (id)currentDataManager;
- (void).cxx_destruct;

@end
