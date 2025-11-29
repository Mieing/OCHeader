@class IESLiveScreenRecordToolActionService, NSString;

@interface IESLiveDownloadMediaPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) IESLiveScreenRecordToolActionService *recordService;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)liveDownloadMediaCallHandler;
- (void)saveImageWithImage:(id)a0 toast:(id)a1 callback:(id /* block */)a2;
- (void)saveVideoWithURL:(id)a0 context:(id)a1 result:(id)a2 callback:(id /* block */)a3;
- (void)saveVideoResourceWithURL:(id)a0 context:(id)a1 result:(id)a2 callback:(id /* block */)a3;
- (id)getSafeHeaderParams;
- (void)saveVideoWithURL:(id)a0 context:(id)a1 toast:(id)a2 callback:(id /* block */)a3;
- (void)showToast:(id)a0;
- (void).cxx_destruct;

@end
