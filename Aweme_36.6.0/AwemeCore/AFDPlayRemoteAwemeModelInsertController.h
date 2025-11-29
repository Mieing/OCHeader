@class NSString, NSMutableArray, AFDPlayRemoteAwemeModelProcessor;

@interface AFDPlayRemoteAwemeModelInsertController : NSObject

@property (retain, nonatomic) NSMutableArray *insertedModels;
@property (retain, nonatomic) NSMutableArray *insertedPreviousAwemeList;
@property (retain, nonatomic) NSMutableArray *insertedMiddleModelList;
@property (readonly, nonatomic) AFDPlayRemoteAwemeModelProcessor *modelProcessor;
@property (readonly, nonatomic) NSMutableArray *completionObserverBlock;
@property (nonatomic) long long fetchState;
@property (readonly, copy, nonatomic) NSString *roomID;
@property (readonly, nonatomic) BOOL supportRichAweme;

- (id)initWithRoomID:(id)a0 supportRichAweme:(BOOL)a1;
- (id)insertedPreviousAwemeModelList;
- (void)updateInsertModels:(id)a0;
- (void)fetchInsertedPreviousModelsWithCompletion:(id /* block */)a0;
- (void)observerFetchCompletion:(id /* block */)a0;
- (id)filterInsertAwemeModel:(id)a0;
- (id)insertMiddleAwemeToAwemeList:(id)a0 dataItem:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
