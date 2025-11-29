@interface ImageBrowserUtils : NSObject

+ (void)animSetViews:(id)a0 hidden:(BOOL)a1;
+ (void)animSetViews:(id)a0 hidden:(BOOL)a1 duration:(double)a2;
+ (id)localImageSaveReportQueue;
+ (void)reportLocalImageSaveWithMsg:(id)a0 imagePath:(id)a1;
+ (void)reportLocalImageSaveWithMsg:(id)a0 image:(id)a1 qrCodeUrl:(id)a2;
+ (void)reportLocalVideoSaveWithMsg:(id)a0 videoPath:(id)a1;
+ (void)reportLocalVideoSaveWithMsg:(id)a0 videoSize:(struct CGSize { double x0; double x1; })a1;

@end
