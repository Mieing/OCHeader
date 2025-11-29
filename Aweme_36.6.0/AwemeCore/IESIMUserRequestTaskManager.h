@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMUserRequestTaskManager : NSObject

@property (retain, nonatomic) NSMutableSet *tasks;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *launchQueue;

- (void)fetchUserProfileSceneInfoWithUserID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 expiresTime:(double)a3 completion:(id /* block */)a4;
- (id)taskItemForUserID:(id)a0 secUserID:(id)a1 extraParams:(id)a2 expiresTime:(double)a3;
- (void)removeInvalidTaskWithFinishTask:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
