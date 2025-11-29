@class NSString, MMLiveTaskId, NSMutableDictionary;

@interface MMLiveCommentDataPostEngine : NSObject <MMGroupLiveMgrExt, MMLiveTaskMgrExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (retain, nonatomic) NSMutableDictionary *postQueueDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)postLiveCommentWithContent:(id)a0 localSeq:(double)a1 clientMsgId:(id)a2 taskId:(id)a3 msgType:(unsigned int)a4 nickName:(id)a5 externInfo:(id)a6;
- (void)postNextTaskForBox:(unsigned int)a0;
- (id)tryExtractPostingTaskWithPostTaskID:(unsigned long long)a0 boxType:(unsigned int)a1;
- (id)getPostQueueWithBoxType:(unsigned int)a0;
- (BOOL)applyPostLiveMessageWithPostTask:(id)a0;
- (void)handleOnPostLiveMessageResult:(id)a0 taskId:(id)a1 postTaskID:(unsigned long long)a2 boxType:(unsigned int)a3;
- (void).cxx_destruct;

@end
