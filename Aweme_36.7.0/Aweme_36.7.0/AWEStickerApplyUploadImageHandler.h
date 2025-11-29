@class NSMutableArray, ACCFileUploadServiceBuilder, IESEffectModel;
@protocol ACCNetServiceProtocol;

@interface AWEStickerApplyUploadImageHandler : AWEStickerApplyBaseHandler

@property (retain, nonatomic) id<ACCNetServiceProtocol> netService;
@property (retain, nonatomic) ACCFileUploadServiceBuilder *uploadBuilder;
@property (nonatomic) double handleMultiUploadBegin;
@property (weak, nonatomic) IESEffectModel *currentSticker;
@property (retain, nonatomic) NSMutableArray *uploadServiceArr;

- (id)p_generateFilePath:(id)a0;
- (void)camera:(id)a0 didRecvMessage:(id)a1;
- (void)camera:(id)a0 willApplySticker:(id)a1;
- (void)p_clearFolder;
- (void)p_handleUploadSingleImage:(id)a0 taskId:(long long)a1;
- (void)p_handleUploadMultiImageMessageBody:(id)a0 taskID:(long long)a1;
- (id)p_convertToDataWithEffectImage:(id)a0;
- (id)p_writeEffectImage:(id)a0 suffix:(id)a1;
- (id)p_createZipWithFilePaths:(id)a0;
- (void)p_sendMessageToEffect:(id)a0 taskId:(long long)a1;
- (void)p_uploadImageAt:(id)a0 completion:(id /* block */)a1;
- (void)p_sendMessageToEffectWithImageURIs:(id)a0 failed:(BOOL)a1 taskID:(long long)a2 errorCode:(unsigned long long)a3 errorMessag:(id)a4;
- (void)p_uploadMultiImageFiles:(id)a0 taskID:(long long)a1 uploadParamsModel:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
