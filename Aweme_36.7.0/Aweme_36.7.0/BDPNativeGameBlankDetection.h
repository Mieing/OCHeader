@interface BDPNativeGameBlankDetection : NSObject

+ (void)executeImageDetectionWithDetectionModel:(id)a0 pixelProducer:(id)a1 needPureColorDetection:(BOOL)a2 needAbnormalRenderDetection:(BOOL)a3;
+ (BOOL)p_imagePixelsIsPureColor:(char *)a0 width:(unsigned int)a1 height:(unsigned int)a2;
+ (BOOL)p_enableUploadImageWithAppID:(id)a0;
+ (id)p_generateImageWithPixels:(char *)a0 width:(unsigned int)a1 height:(unsigned int)a2;
+ (void)p_blankEventWithDetectionModel:(id)a0 detectionResultModel:(id)a1;
+ (void)p_uploadPureColorImage:(id)a0 appID:(id)a1 completion:(id /* block */)a2 extraMsg:(id)a3;
+ (void)p_executeAbnormalRenderDetectionWithDetectionModel:(id)a0 resultModel:(id)a1 screenShotImage:(id)a2 snapshotBeginTime:(double)a3;
+ (void)abnormalRenderImageUploadWithIsRendersAbnormal:(BOOL)a0 model:(id)a1 resultModel:(id)a2 screenShotImage:(id)a3 snapshotBeginTime:(double)a4;

@end
