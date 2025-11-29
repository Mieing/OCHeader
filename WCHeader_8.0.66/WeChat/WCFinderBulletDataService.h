@interface WCFinderBulletDataService : NSObject

+ (int)postIdentityForObjectID:(id)a0;
+ (BOOL)bulletSupported:(id)a0;
+ (BOOL)enableFetch:(id)a0;
+ (BOOL)enableSend:(id)a0;
+ (BOOL)_enable;
+ (BOOL)_enableBulletComment:(id)a0;
+ (void)followAggregateBulletWithItem:(id)a0 contentVM:(id)a1 commentScene:(int)a2 successful:(id /* block */)a3 failure:(id /* block */)a4;
+ (void)postBulletCommentWithObjectId:(id)a0 objectNonceId:(id)a1 finderUsername:(id)a2 videoTimestamp:(unsigned long long)a3 content:(id)a4 commentSource:(int)a5 postIdentity:(int)a6 commentScene:(int)a7 replyCommentId:(unsigned long long)a8 successful:(id /* block */)a9 failure:(id /* block */)a10;
+ (void)deleteBulletCommentWithObjectId:(id)a0 objectNonceId:(id)a1 commentId:(unsigned long long)a2 commentScene:(int)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
+ (void)modBulletCommentWithObjectId:(id)a0 nonceID:(id)a1 finderUsername:(id)a2 isSwitchON:(BOOL)a3 successBlock:(id /* block */)a4 failBlock:(id /* block */)a5;
+ (void)modBlackListWithOpType:(int)a0 bulletItem:(id)a1 objectId:(id)a2 nonceID:(id)a3 success:(id /* block */)a4 failure:(id /* block */)a5;
+ (void)getGetBulletCommentUserInfoWithObjectId:(id)a0 objectNonceId:(id)a1 commentId:(unsigned long long)a2 commentScene:(int)a3 successful:(id /* block */)a4 failure:(id /* block */)a5;
+ (void)updateBulletCommentStatusWithObjectId:(unsigned long long)a0 refBulletCommentId:(unsigned long long)a1 action:(long long)a2 finderUsername:(id)a3 nonceID:(id)a4 successBlock:(id /* block */)a5 failBlock:(id /* block */)a6;

@end
