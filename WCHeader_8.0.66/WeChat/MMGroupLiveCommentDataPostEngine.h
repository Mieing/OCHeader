@class NSString;

@interface MMGroupLiveCommentDataPostEngine : MMLiveCommentDataPostEngine <MMGroupLiveMgrExt>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)applyPostLiveMessageWithPostTask:(id)a0;
- (id)tryExtractPostingTaskWithPostTaskID:(unsigned long long)a0 boxType:(unsigned int)a1;
- (void)onPostLiveMessageResult:(id)a0 liveId:(unsigned long long)a1 andRoomId:(id)a2;

@end
