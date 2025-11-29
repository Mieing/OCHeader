@class NSLock, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AWEMVChannelDataShardParser : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedParserQueue;

@property unsigned long long state;
@property (copy, nonatomic) NSDictionary *responseDict;
@property (copy, nonatomic) id /* block */ parseModelBlock;
@property (nonatomic) long long totalAwemeCount;
@property (nonatomic) long long renderRangeMax;
@property (copy, nonatomic) NSDictionary *responseShell;
@property (retain, nonatomic) NSMutableArray *parsedAwemeList;
@property (retain, nonatomic) NSMutableArray *loadDataContexts;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue;
@property (nonatomic) long long parseShardSize;
@property (nonatomic) long long renderShardSize;

- (BOOL)loadParsedDataWithFromIndexBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)startShardingParse:(id)a0 shardingCompletion:(id /* block */)a1;
- (void)startShardingParse:(id)a0 parseModelBlock:(id /* block */)a1 shardingCompletion:(id /* block */)a2;
- (void)__stepParseAwemeList:(id)a0 fromIndex:(long long)a1 beginDate:(id)a2 shardingCompletion:(id /* block */)a3;
- (void)_resumeSavedLoadDataContextAfterParse;
- (id)getResponseWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (void)prepare;
- (void)cancel;

@end
