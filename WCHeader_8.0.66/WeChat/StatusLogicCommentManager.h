@interface StatusLogicCommentManager : NSObject {
    struct weak_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *__ptr_; struct __shared_weak_count *__cntrl_; } client_invoker_;
}

+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)a0 svrIdentity:(const void *)a1;

- (void)attachClientInvoker:(const void *)a0;
- (struct shared_ptr<zidl::ZClientInvoker> { struct ZClientInvoker *x0; struct __shared_weak_count *x1; })getClientInvoker;
- (void)zidlBuild;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (id)isLikeTextStatus:(id)a0;
- (id)insertOrReplaceLikeData:(id)a0;
- (id)deleteLikeData:(id)a0 sequence:(long long)a1;
- (id)performSelfDoLike:(id)a0 isLike:(BOOL)a1;
- (id)getAllTextStatusLike:(id)a0 limit:(int)a1;
- (id)getLikeDataByUserNameAndId:(id)a0 userName:(id)a1;
- (id)insertOrReplaceComment:(id)a0;
- (id)deleteComment:(id)a0 sequence:(long long)a1;
- (id)getCommentNoSendSuccess:(id)a0;
- (id)updateCommentSendState:(id)a0;
- (id)deleteMessage:(id)a0;
- (id)markAllMessageRead;
- (id)clearAllMessage;
- (id)getAllMessage:(id)a0;
- (id)getMessageByCondition:(int)a0 isUnread:(BOOL)a1 maxCreateTimeMs:(long long)a2;
- (int)getMessageCount:(id)a0;
- (id)getLikeMessage:(id)a0;
- (id)getCommentMessage:(id)a0;
- (int)getNotReadNotifyCount;
- (id)markAllNotifyRead;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
