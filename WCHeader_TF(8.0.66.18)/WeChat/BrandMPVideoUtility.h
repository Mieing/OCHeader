@interface BrandMPVideoUtility : NSObject

+ (void)openBrandVideoPageWithOpenParam:(id)a0 navigationController:(id)a1 delegate:(id)a2 eScene:(unsigned long long)a3;
+ (void)openBrandVideoPageWithMsg:(id)a0 navigationController:(id)a1 delegate:(id)a2 eScene:(unsigned long long)a3 originRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 thumbImage:(id)a5 preLoadThumbUrl:(id)a6 videoInitialTime:(double)a7;
+ (id)wcDataItemFromMsgWrap:(id)a0 postSource:(unsigned int *)a1;
+ (id)genVideoTempPathWithVid:(id)a0;
+ (id)genVideoFormatPathWithVid:(id)a0;
+ (BOOL)canShareTimeline;

@end
