@interface EditImageReport : NSObject

+ (void)EditImageReportClickBehavior:(unsigned int)a0 fromScene:(unsigned int)a1;
+ (void)EditImageReportSingleSendBehavior:(id)a0 isOriginal:(unsigned int)a1 fromScene:(unsigned int)a2;
+ (void)EditImageReportOverallSendingEditedImage:(unsigned int)a0 withAllImage:(unsigned int)a1 fromScene:(unsigned int)a2 toScene:(unsigned int)a3;
+ (void)EditImageReportEmotionUsed:(id)a0;
+ (void)EditImageReportLongPressSendNotEdit;
+ (void)EditImageReportVeryLongImageEdit;
+ (void)EditImageReportNilImageInLoadOriginalImage;
+ (void)EditImageReportExceedWaitTimeInRenderingImage;
+ (void)EditImageReportCannotReadColorPointMap;
+ (void)EditImageReportDonotHaveDelegateSelector;
+ (void)EditImageReportCannotFindColorInColorBar;

@end
