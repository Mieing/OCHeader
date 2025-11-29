@class NSString, FaceRecogReporter, FaceRecogBindVideoLogic;
@protocol FaceRecogUploadLogicDelegate;

@interface FaceRecogUploadLogic : MMObject <ICdnComMgrExt, FaceRecogBindVideoLogicDelegate, PBMessageObserverDelegate>

@property (retain, nonatomic) NSString *currentFaceResultClientId;
@property (retain, nonatomic) NSString *currentFaceVideoClientId;
@property (retain, nonatomic) NSString *currentFaceVideoForPayClientId;
@property (retain, nonatomic) NSString *currentFaceResultPath;
@property (retain, nonatomic) NSString *currentFaceVideoPath;
@property (nonatomic) unsigned int currentResourceType;
@property (nonatomic) BOOL uploading;
@property (retain, nonatomic) FaceRecogBindVideoLogic *bindVideoLogic;
@property (weak, nonatomic) id<FaceRecogUploadLogicDelegate> delegate;
@property (nonatomic) unsigned int scene;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *bioId;
@property (retain, nonatomic) FaceRecogReporter *reporter;
@property (nonatomic) BOOL isRSA;
@property (copy, nonatomic) NSString *userTicket;
@property (copy, nonatomic) NSString *verifyInfo;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *packageSign;
@property (retain, nonatomic) NSString *serialId;
@property (nonatomic) long long extraVideoMaxSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)genResourceClientId:(id)a0 bioId:(id)a1;

- (id)init;
- (void)dealloc;
- (BOOL)isUploading;
- (void)cancelUpload:(unsigned int)a0;
- (void)onUploadStartFailed:(unsigned int)a0;
- (BOOL)startUploadFaceResult:(id)a0 path:(id)a1;
- (BOOL)startUploadFaceVideo:(id)a0;
- (BOOL)startUploadFaceVideo:(id)a0 forSpam:(BOOL)a1;
- (BOOL)isUploadedCorrectResource:(id)a0;
- (void)safeRenameDeleteFile:(id)a0;
- (void)bindVideoOperationDone:(int)a0 logic:(id)a1;
- (void)OnCdnUpload:(id)a0;
- (void)onUploadOperationFinish:(id)a0;
- (void)getFaceFlashData:(id)a0 inWorkMode:(long long)a1;
- (void)startUploadFaceVideoForPay:(id)a0;
- (void)handleFaceFlashVideoForPayCDNUploadWithFilePath:(id)a0 bioId:(id)a1;
- (void)handleFaceFlashVideoForPayCGIRequestWithFileId:(id)a0 aesKey:(id)a1 serialId:(id)a2;
- (void)onGetRecordExtraVideoResp:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
