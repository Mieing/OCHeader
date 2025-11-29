@class NSMutableSet, NSMutableDictionary, NSObject;
@protocol EcUploadDispatchDelegate, OS_dispatch_queue;

@interface EcUploadDispatch : NSObject

@property (nonatomic) long long taskMax;
@property (weak, nonatomic) id<EcUploadDispatchDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scheduleQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSMutableDictionary *runingTask;
@property (retain, nonatomic) NSMutableSet *md5List;

- (void)triggerDispatch;
- (id)initWithTaskMax:(long long)a0 delegate:(id)a1;
- (void)taskComplete:(id)a0;
- (void).cxx_destruct;

@end
