@class NSString;

@interface MMGroupLiveCommentDataFetchEngine : MMLiveCommentDataFetchEngne <MMGroupLiveMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyGetLiveMessageWithTaskId:(id)a0;
- (id)commentDataMgr;
- (void)onGetLiveMessageResult:(id)a0 liveMessageResp:(id)a1 liveId:(unsigned long long)a2 andRoomId:(id)a3;
- (id)tranferToLiveCommentDataItems:(id)a0 roomId:(id)a1;
- (id)filterLikeMsg:(id)a0;

@end
