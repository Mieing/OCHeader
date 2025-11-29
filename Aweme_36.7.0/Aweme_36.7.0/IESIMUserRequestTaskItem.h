@class AWEIMUser, NSString, NSDictionary, NSMutableSet;
@protocol IESIMHttpTask;

@interface IESIMUserRequestTaskItem : NSObject

@property (retain, nonatomic) NSMutableSet *callbacks;
@property (retain, nonatomic) id<IESIMHttpTask> requestTask;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } requestsLock;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) double requestedTime;
@property (retain, nonatomic) AWEIMUser *lastRequestUser;
@property (copy, nonatomic) id /* block */ requestFinishBlock;
@property (nonatomic) BOOL isRequesting;

- (void)lockTask;
- (void)unLockTask;
- (void)processAllCallbackForError:(id)a0;
- (void)processAllCallbackForUser:(id)a0;
- (void)requestWithBlock:(id /* block */)a0;
- (long long)callbacksCount;
- (BOOL)removeAllCallback;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
