@class NSString, ForwardMessageLogicController;

@interface WAJSEventHandler_shareVideoMessage : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate> {
    ForwardMessageLogicController *m_forwardMsgLogic;
    NSString *m_tempVideoPath;
}

@property (nonatomic) BOOL isToSpecificContact;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleJSEvent:(id)a0;
- (void)shareVideo:(id)a0 toUsername:(id)a1;
- (id)genForwardMessageWrapWithVideoPath:(id)a0 thumbPath:(id)a1;
- (id)getVideoRealPathWithPath:(id)a0;
- (id)getThumbDataWithPath:(id)a0;
- (id)getPackageDataWithPath:(id)a0;
- (id)createTempVideoWithData:(id)a0 extension:(id)a1;
- (void)removeTempVideo;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)OnForwardMessageConfirmCanceled:(id)a0;
- (void).cxx_destruct;

@end
