@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BXStrategyInfoManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *infoQueue;
@property (retain, nonatomic) NSMutableDictionary *modelInfos;

+ (id)sharedInstance;

- (void)registerStart;
- (void)registerModel:(id)a0 modelBlock:(id /* block */)a1;
- (id)getStrategyModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
