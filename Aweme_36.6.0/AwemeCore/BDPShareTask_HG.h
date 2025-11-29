@class NSString, BDPUniqueID, BDPSharePrepareModel;

@interface BDPShareTask_HG : NSObject

@property (copy, nonatomic) NSString *hostID;
@property (copy, nonatomic) NSString *deviceID;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property BOOL requesting;
@property (retain, nonatomic) BDPSharePrepareModel *prepareModel;

- (id)initWithPrepareModel:(id)a0 uniqueID:(id)a1 deviceID:(id)a2 hostID:(id)a3;
- (void)requestShareResultModelWithCompletion:(id /* block */)a0;
- (void)beginToUploadImageWithCompletion:(id /* block */)a0;
- (void)requestPreviewShareResultModelWithCompletion:(id /* block */)a0;
- (void)cleanCanceledShareDataWithResultModel:(id)a0;
- (void)requestMsgWithURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)handleIMShareUploadImage:(id)a0 completion:(id /* block */)a1;
- (void)fetchUploadImage:(id)a0 imageData:(id)a1 completion:(id /* block */)a2;
- (void)generateIconShareImage:(id /* block */)a0;
- (id)getSchemaForShareWithQuery:(id)a0 currentSchema:(id)a1;
- (void).cxx_destruct;

@end
