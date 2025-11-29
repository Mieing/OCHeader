@class AWEIMVideoTransCoder, NSString, IESIMSendMsgFlowManager, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMSendAttachmentController : NSObject <AWEIMSendAttachmentProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *attachmentQueue;
@property (retain, nonatomic) AWEIMVideoTransCoder *transcoder;
@property (retain, nonatomic) IESIMSendMsgFlowManager *sendMsgFlowManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)messageSenderWithType:(long long)a0;
+ (id)sharedInstance;

- (void)cancelSendAttachmentMessage:(id)a0;
- (void)forwardSendAttachmentMessage:(id)a0 mentionUsers:(id)a1 shareContext:(id)a2 toConversation:(id)a3 completion:(id /* block */)a4;
- (BOOL)forwardSendCombineShareMessage:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)forwardSendOpenPlatformMsg:(id)a0 toConversation:(id)a1 completion:(id /* block */)a2;
- (void)sendVideoWithLocalURL:(id)a0 toConversationID:(id)a1 firstFrameImage:(id)a2 coverImage:(id)a3 videoText:(id)a4 fromGallery:(BOOL)a5 originVideoMD5:(id)a6 enterMethod:(id)a7 publishType:(unsigned long long)a8 extraInfo:(id)a9 trackParams:(id)a10 attachmentObjectBlock:(id /* block */)a11;
- (void)sendAssets:(id)a0 toConversationID:(id)a1 checkText:(id)a2 fromGallery:(BOOL)a3 originMD5:(id)a4 publishType:(unsigned long long)a5 extraInfo:(id)a6 trackParams:(id)a7 attachmentObjectBlock:(id /* block */)a8;
- (void)sendAttachmentMsgWithContext:(id)a0 completion:(id /* block */)a1;
- (void)resendAttachmentMessage:(id)a0 toCon:(id)a1 completion:(id /* block */)a2;
- (void)handleAttachmentMsgUploadFailedNotification:(id)a0;
- (void)resetForwardMsgWhenFilePathEmpty:(id)a0 toConversation:(id)a1;
- (id)constructSendMessageAttachmentObjectWithDBModelArray:(id)a0 message:(id)a1 conversationID:(id)a2;
- (long long)p_getMessageTypeWith:(unsigned long long)a0 isVideo:(BOOL)a1;
- (id)prepareQuotedContent:(id)a0 conversationID:(id)a1 msgType:(long long)a2;
- (void).cxx_destruct;
- (id)init;

@end
