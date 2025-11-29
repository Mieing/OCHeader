@class MMLiveTaskId;
@protocol MMLiveOnlineUserLogicDelegate;

@interface MMLiveOnlineUserLogic : NSObject

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (weak, nonatomic) id<MMLiveOnlineUserLogicDelegate> logicDelegate;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)fetchOnlineUserList;
- (BOOL)kickAudience:(id)a0;
- (void).cxx_destruct;

@end
