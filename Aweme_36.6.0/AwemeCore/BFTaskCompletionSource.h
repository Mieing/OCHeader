@class NSString, BFTask;

@interface BFTaskCompletionSource : NSObject <IESIMCollectionViewCellLoadTask>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BFTask *task;

+ (id)taskCompletionSource;

- (BOOL)trySetResult:(id)a0;
- (BOOL)trySetError:(id)a0;
- (BOOL)trySetCancelled;
- (void).cxx_destruct;
- (id)init;
- (void)setResult:(id)a0;
- (void)finish;
- (void)setError:(id)a0;
- (void)cancel;

@end
