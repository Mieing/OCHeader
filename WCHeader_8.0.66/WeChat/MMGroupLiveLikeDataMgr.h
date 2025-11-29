@class NSString;

@interface MMGroupLiveLikeDataMgr : MMLiveLikeDataMgr <MMGroupLiveMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyLikeWithPostTask:(id)a0;
- (void)updateLikeMessage:(id)a0 likeCount:(unsigned long long)a1 liveId:(unsigned long long)a2 andRoomId:(id)a3;
- (void)onLiveLikeResult:(id)a0 liveId:(unsigned long long)a1 andRoomId:(id)a2;

@end
