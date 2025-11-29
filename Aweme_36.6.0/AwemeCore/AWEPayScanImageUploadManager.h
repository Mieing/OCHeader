@class NSArray, CJPaySKMScanUploadConfig, AWEPayScanImageUploader;

@interface AWEPayScanImageUploadManager : NSObject

@property (retain, nonatomic) AWEPayScanImageUploader *imageUploader;
@property (retain, nonatomic) NSArray *sellProductCodeList;
@property (retain, nonatomic) CJPaySKMScanUploadConfig *settingsConfig;
@property (nonatomic) BOOL isDebugOn;

+ (id)sharedInstance;

- (void)payDeskPreRequestDidFinishWithParams:(id)a0;
- (void)setupDebug;
- (void)addAlogAndShowDebugToast:(id)a0;
- (BOOL)isNeedUploadScanImage:(id)a0;
- (void)startImageProgress:(id)a0 payInfo:(id)a1 scanInfo:(id)a2;
- (id)handleImageToData:(id)a0;
- (struct CGSize { double x0; double x1; })imageCropExpandSizeScale;
- (void).cxx_destruct;

@end
