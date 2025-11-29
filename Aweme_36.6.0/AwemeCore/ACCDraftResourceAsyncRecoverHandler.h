@class NSMutableDictionary, NSArray, AWEVideoDraftModel, AWEVideoPublishViewModel;

@interface ACCDraftResourceAsyncRecoverHandler : NSObject

@property (readonly, nonatomic) AWEVideoDraftModel *draft;
@property (readonly, weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) NSMutableDictionary *observers;
@property (copy, nonatomic) NSArray *tasks;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double delay;
@property (readonly, nonatomic) long long status;

+ (BOOL)enabled;

- (void)p_callback:(id)a0 task:(id)a1 key:(id)a2;
- (void)p_executeTasksIfNeeded;
- (void)p_allFinish;
- (id)initWithDraft:(id)a0 repository:(id)a1;
- (void)addObserver:(id)a0 forProtocol:(id)a1 repository:(id)a2 canHandle:(id /* block */)a3 handle:(id /* block */)a4;
- (void)startWithTasks:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;

@end
