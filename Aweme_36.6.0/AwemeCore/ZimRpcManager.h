@class NSString, DTFAuthRPC, NSDictionary, DTFOSSModel, APBToygerBioBisConfigManager;
@protocol DTFRPCProxyProtocol;

@interface ZimRpcManager : NSObject

@property (retain, nonatomic) DTFAuthRPC *dtfRPCDelegate;
@property (retain, nonatomic) DTFOSSModel *aliyunOSSModel;
@property (retain, nonatomic) DTFOSSModel *dtfOSSModel;
@property (retain, nonatomic) APBToygerBioBisConfigManager *protoclModel;
@property (copy, nonatomic) NSString *zimId;
@property (copy, nonatomic) NSDictionary *ossConfig;
@property (weak, nonatomic) id<DTFRPCProxyProtocol> rpcDelegate;

- (id)defaultOSSModel;
- (void)doFastUploadInitRequest:(id)a0 withcompletionBlock:(id /* block */)a1;
- (void)doFastUploadValidateRequest:(id)a0 withcompletionBlock:(id /* block */)a1;
- (void)uploadFiles:(id)a0 ossConfig:(id)a1 allowDegrade:(BOOL)a2 completion:(id /* block */)a3;
- (void)uploadFiles:(id)a0 optional:(id)a1 collectionInfo:(id)a2 completion:(id /* block */)a3;
- (void)removeFailedFiles:(id)a0 fromCollectionInfo:(id)a1;
- (id)fillEvidenceVideoInfo:(id)a0 evidence:(id)a1 finalBuckt:(id)a2;
- (void)doSendOCRContent:(id)a0 idSide:(id)a1 withImage:(id)a2 withcompletionBlock:(id /* block */)a3;
- (void)doSendEKYCOCRContent:(id)a0 withcompletionBlock:(id /* block */)a1;
- (void)doSendEKYCOCRContentConfrim:(id)a0 withcompletionBlock:(id /* block */)a1;
- (void)doUploadOSSContent:(id)a0 withcompletionBlock:(id /* block */)a1;
- (void)getSMSCode:(id)a0 completionBlock:(id /* block */)a1;
- (void)verifySMSCode:(id)a0 completionBlock:(id /* block */)a1;
- (id)md5HashformPath:(id)a0;
- (void)addEvidenceVideoFile:(id)a0 evidenceArray:(id)a1;
- (void)addPhotinusVideoFile:(id)a0 content:(id)a1;
- (id)ossConfigWith:(id)a0 fileName:(id)a1 fileType:(id)a2 data:(id)a3 isPictureEvidence:(BOOL)a4 isVideoEvidence:(BOOL)a5;
- (void)addCaptureUploadConfig:(id)a0 to:(id)a1 andToCollectInfo:(id)a2 evidenceVideoPathArray:(id)a3;
- (void)processMultiPictureCollectData:(id)a0 uploadConfigArray:(id)a1 evidenceVideoPathArray:(id)a2;
- (id)rpc;
- (void).cxx_destruct;
- (id)init;

@end
