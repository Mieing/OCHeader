@class NSArray, NSMutableDictionary;
@protocol ACCSideslipPanelListDataBuilderDelegate;

@interface ACCSideslipPanelListDataBuilder : NSObject

@property (copy, nonatomic) NSArray *workers;
@property (copy, nonatomic) NSArray *totalList;
@property (retain, nonatomic) NSMutableDictionary *propPickCellModelDic;
@property (weak, nonatomic) id<ACCSideslipPanelListDataBuilderDelegate> delegate;

- (void)resetListData;
- (void)buildListDataForScene:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithWorkers:(id)a0;
- (void)updateRightFirstIndexIfNeededWithWorkers:(id)a0;
- (id)composeListDataForScene:(unsigned long long)a0 withWorkers:(id)a1;
- (void)executeForScene:(unsigned long long)a0 withWorkers:(id)a1 withCompletion:(id /* block */)a2;
- (BOOL)isSyncScene:(unsigned long long)a0;
- (void)logWithWorker:(id)a0 andError:(id)a1;
- (void).cxx_destruct;

@end
