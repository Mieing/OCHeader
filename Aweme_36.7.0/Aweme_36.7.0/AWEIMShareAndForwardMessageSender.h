@class NSString;

@interface AWEIMShareAndForwardMessageSender : NSObject <IESIMShareAndForwardMessageSenderInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)p_getNameListFromShareList:(id)a0;
+ (void)sendMessageToShareList:(id)a0 text:(id)a1 shareImpl:(id)a2 completion:(id /* block */)a3;
+ (id)serialSendQueue;
+ (void)p_sendMessageToShareList:(id)a0 text:(id)a1 multiShareImps:(id)a2 completion:(id /* block */)a3;
+ (void)p_sendMessageToShareList:(id)a0 text:(id)a1 shareImpl:(id)a2 isLastSend:(BOOL)a3 completion:(id /* block */)a4;
+ (id)attachmentsInContext:(id)a0;
+ (id)attachmentInputsInTarget:(id)a0;
+ (void)p_sendMessageToShareList:(id)a0 containers:(id)a1 isReusedMsg:(BOOL)a2 shareImpl:(id)a3 isLastTarget:(BOOL)a4 isLastSend:(BOOL)a5 conversationID:(id)a6 messageID:(id)a7 completion:(id /* block */)a8;
+ (void)messageContainerWithShareList:(id)a0 text:(id)a1 attachmentObject:(id)a2 shareImpl:(id)a3 completion:(id /* block */)a4;
+ (id)messageContainerWithShareList:(id)a0 message:(id)a1 text:(id)a2 shareImpl:(id)a3 isLastTarget:(BOOL)a4;
+ (void)p_sendMessageToShareList:(id)a0 containers:(id)a1 isReusedMsg:(BOOL)a2 shareImpl:(id)a3 isLastTarget:(BOOL)a4 isLastSend:(BOOL)a5 completion:(id /* block */)a6;
+ (void)p_uploadImageAndGetUrl:(id)a0 completion:(id /* block */)a1;
+ (void)p_trackShareCommentEvent:(id)a0 context:(id)a1 shareModel:(id)a2 shareList:(id)a3 shareText:(id)a4;
+ (void)sendAttachmentMessage:(id)a0 conversationID:(id)a1 completion:(id /* block */)a2;
+ (void)p_sendMessageCompletedToShareList:(id)a0 containers:(id)a1 shareImpl:(id)a2 messageDict:(id)a3;
+ (BOOL)p_shouldHideCustomToastWithContext:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)sendMessageToShareList:(id)a0 text:(id)a1 shareImpl:(id)a2 createGroup:(BOOL)a3 createGroupTrackExtra:(id)a4 completion:(id /* block */)a5;
- (void)createGroupWithShareList:(id)a0 completion:(id /* block */)a1;
- (void)createGroupWithShareList:(id)a0 trackExtra:(id)a1 completion:(id /* block */)a2;
- (void)sendMessageToShareList:(id)a0 text:(id)a1 shareImpl:(id)a2 createGroup:(BOOL)a3 completion:(id /* block */)a4;
- (void)p_safeSendMessageToShareList:(id)a0 text:(id)a1 shareImpl:(id)a2 createGroup:(BOOL)a3 createGroupTrackExtra:(id)a4 completion:(id /* block */)a5;
- (void)p_safeCreateGroupWithShareList:(id)a0 trackExtra:(id)a1 completion:(id /* block */)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
