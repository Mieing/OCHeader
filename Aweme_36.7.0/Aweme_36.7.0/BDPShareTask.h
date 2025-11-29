@class BDPSharePrepareModel, NSString, BDPUniqueID, NSMutableArray;

@interface BDPShareTask : NSObject

@property (copy, nonatomic) NSString *hostID;
@property (copy, nonatomic) NSString *deviceID;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property BOOL requesting;
@property (copy, nonatomic) id /* block */ uploadImageCallback;
@property (copy, nonatomic) id /* block */ previewResultModelCallback;
@property (copy, nonatomic) id /* block */ resultModelCallback;
@property (nonatomic) BOOL isRequestingSignature;
@property (retain, nonatomic) NSMutableArray *signatureCallbacks;
@property (retain, nonatomic) BDPSharePrepareModel *prepareModel;

- (void)showLoadingViewIfNeed;
- (id)initWithPrepareModel:(id)a0 uniqueID:(id)a1 deviceID:(id)a2 hostID:(id)a3;
- (void)requestShareResultModelWithCompletion:(id /* block */)a0;
- (void)requestSignatureWithCompletion:(id /* block */)a0;
- (void)beginToUploadImageWithCompletion:(id /* block */)a0;
- (void)requestPreviewShareResultModelWithCompletion:(id /* block */)a0;
- (void)requestShareMsgContentWithShareResultModel:(id)a0 completion:(id /* block */)a1;
- (void)uploadScreenShot:(id)a0 completion:(id /* block */)a1;
- (void)uploadUserInfoWithPrepareModel:(id)a0 type:(id)a1 shareResultModel:(id)a2 shareList:(id)a3 completion:(id /* block */)a4;
- (void)requestMsgWithURL:(id)a0 completion:(id /* block */)a1;
- (void)requestWithShareResultModel:(id)a0 completion:(id /* block */)a1;
- (id)talentAppId;
- (id)getSpecificErrorForTrackerWithErrorCode:(long long)a0;
- (void).cxx_destruct;

@end
