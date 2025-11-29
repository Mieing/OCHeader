@class MMIotHwAppFile, MMIotHwMusic, MMIotHwUrl, MMIotHwLocation, MMIotHwVideo, MMIotHwImage;

@interface MMIotHwDeviceMsg : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) MMIotHwMusic *musicMsg;
@property (retain, nonatomic) MMIotHwLocation *locationMsg;
@property (retain, nonatomic) MMIotHwImage *imageMsg;
@property (retain, nonatomic) MMIotHwAppFile *fileMsg;
@property (retain, nonatomic) MMIotHwUrl *urlMsg;
@property (retain, nonatomic) MMIotHwVideo *videoMsg;

+ (void)initialize;

@end
