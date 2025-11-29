@interface AWEIMMixPhotoRequestManager : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)syncMessageTask:(id)a0 conversationShortID:(long long)a1 serverMessageID:(long long)a2 updateTime:(long long)a3 status:(long long)a4 slotNumber:(long long)a5;
- (id)requestStartMixPhotoWithContext:(id)a0;
- (id)requestEndMixPhotoWithContext:(id)a0;
- (id)requestJoinMixPhotoWithContext:(id)a0 actionType:(long long)a1;
- (id)p_requestWithActionType:(long long)a0 context:(id)a1;
- (id)p_requestMixPhotoWithParams:(id)a0;
- (id)requestReflowMixPhotoWithContext:(id)a0;
- (id)syncMessageTask:(id)a0 conversationShortID:(long long)a1 serverMessageID:(long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
