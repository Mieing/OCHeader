@class NSString;

@interface VideoTemplate_FaceRecognitionInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int isEnable;
@property (nonatomic) unsigned int minFaceFramePercent;
@property (retain, nonatomic) NSString *captureBlockTipsWording;
@property (retain, nonatomic) NSString *photoBlockTipsWording;

+ (void)initialize;

@end
