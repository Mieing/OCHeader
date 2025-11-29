@class NSTimer;

@interface IESECLiveAsyncBlockWrapper : NSObject

@property (nonatomic) long long totalCount;
@property (nonatomic) long long curCountNumber;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSTimer *doCompletionTimer;

- (id)initWithAsyncBlockNumber:(long long)a0 completion:(id /* block */)a1;
- (void)initialParamsWithTotalCount:(long long)a0 completion:(id /* block */)a1;
- (void)cancelDoCompletionTimer;
- (void)checkAsyncBlockCompletion;
- (long long)getCurCountNumber;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupTimer;
- (void)fulfill;

@end
