@class NSError, NSString, FBKVOController;
@protocol IESIMFlowNodeProtocol;

@interface AWEIMResendUploadNode : NSObject <IESIMFlowNodeProtocol>

@property (retain, nonatomic) FBKVOController *uploaderKVO;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id<IESIMFlowNodeProtocol> next;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)outputClass;
- (Class)inputClass;
- (void)runWithInput:(id)a0 progressBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (void)moveOrCopyFromPath:(id)a0 toPath:(id)a1 complete:(id /* block */)a2;
- (id)quickDataForOriginData:(id)a0;
- (void)p_uploadFileAndUpdateAttachmentDBWithFileIDArray:(id)a0 quickDataDict:(id)a1 message:(id)a2 content:(id)a3 input:(id)a4 completion:(id /* block */)a5;
- (BOOL)p_shouldAddInlinePic:(id)a0;
- (void)p_asyncGenerateInlineDataWithData:(id)a0 complete:(id /* block */)a1;
- (void)p_uploadFileAndUpdateAttachmentDBWithFileID:(id)a0 quickData:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)p_asyncGenerateHmacSHA256WithMessage:(id)a0 key:(id)a1 oid:(id)a2 messageContent:(id)a3 content:(id)a4 complete:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;

@end
