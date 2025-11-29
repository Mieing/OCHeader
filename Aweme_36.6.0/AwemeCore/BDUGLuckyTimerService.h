@class NSString, NSMutableDictionary, NSMutableArray;

@interface BDUGLuckyTimerService : NSObject <BDUGLuckyTimerTaskItemDelegate, BDUGLuckyTimerServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *taskItems;
@property (retain, nonatomic) NSMutableArray *requestingTokens;
@property (retain, nonatomic) NSMutableArray *needRemovedTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceProtocol;

- (void)createTimerTask:(id)a0 taskName:(id)a1 extra:(id)a2 callback:(id /* block */)a3;
- (void)removeTimerTaskWithToken:(id)a0;
- (id)__isTimerTaskExist:(id)a0;
- (void)__removeTimerTaskWithTaskKey:(id)a0;
- (void)onTimerTaskItemDestroy:(id)a0;
- (void).cxx_destruct;

@end
