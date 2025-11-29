@class NSString;
@protocol IESIMFlowNodeProtocol;

@interface AWEIMAttachmentRefreshAssetNode : NSObject <IESIMFlowNodeProtocol>

@property (nonatomic) double startTime;
@property (retain, nonatomic) id<IESIMFlowNodeProtocol> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCoverAttachmentObjectWithSendObject:(id)a0;
+ (id)getCoverDBModelWithSendContext:(id)a0;
+ (void)updateAttachmentDataInfoWithContext:(id)a0 loadContext:(id)a1 attachObject:(id)a2 dbModel:(id)a3 completion:(id /* block */)a4;
+ (id)getAssetAttachmentObjectWithSendObject:(id)a0;
+ (id)getAssetDBModelWithSendContext:(id)a0;
+ (void)updateLivePhotoAttachmentWithLoad:(id)a0 loadContext:(id)a1 completion:(id /* block */)a2;
+ (id)getVideoQuickAttachmentObjectWithSendObject:(id)a0;
+ (id)getVideoQuickDataDBModelWithSendContext:(id)a0;
+ (void)updateVideoFirstFrameWithContext:(id)a0 loadContext:(id)a1 attachment:(id)a2 dbModel:(id)a3 completion:(id /* block */)a4;
+ (void)updateVideoAttachmentWithContext:(id)a0 loadContext:(id)a1 attachment:(id)a2 dbModel:(id)a3 completion:(id /* block */)a4;
+ (void)updateImageAttachmentWithLoadContext:(id)a0 sendObj:(id)a1 attachment:(id)a2 dbModel:(id)a3 completion:(id /* block */)a4;
+ (void)updateVideoCoverWithContext:(id)a0 loadContext:(id)a1 sendObj:(id)a2 attachment:(id)a3 completion:(id /* block */)a4;
+ (void)writeDataToDiskWithData:(id)a0 relativeFilePath:(id)a1 completion:(id /* block */)a2;
+ (void)updateMessageLocalExtWithMessageId:(id)a0 conversationId:(id)a1 filePathInfo:(id)a2 completion:(id /* block */)a3;
+ (BOOL)isSendAssetWithFileType:(int)a0;
+ (BOOL)isCoverWithFileType:(int)a0;

- (Class)outputClass;
- (Class)inputClass;
- (void)runWithInput:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)isSupportRefreshWithMessageType:(long long)a0;
- (void)p_trackRefreshAssetFinishWithEvent:(id)a0 context:(id)a1;
- (void)p_markError:(id)a0;
- (void)startUploadProgressWithContextIfNeed:(id)a0 dbModelArray:(id)a1 messageType:(long long)a2;
- (id)p_mediaTypeWithContext:(id)a0;
- (void).cxx_destruct;
- (id)identifier;

@end
