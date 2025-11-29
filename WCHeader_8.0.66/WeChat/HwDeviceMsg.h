@class HwDeviceMsg_HwAppFile, HwDeviceMsg_HwLocation, HwDeviceMsg_HwUrl, HwDeviceMsg_HwImage, HwDeviceMsg_HwVideo, HwDeviceMsg_HwMusic;

@interface HwDeviceMsg : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) HwDeviceMsg_HwMusic *musicMsg;
@property (retain, nonatomic) HwDeviceMsg_HwLocation *locationMsg;
@property (retain, nonatomic) HwDeviceMsg_HwImage *imageMsg;
@property (retain, nonatomic) HwDeviceMsg_HwAppFile *fileMsg;
@property (retain, nonatomic) HwDeviceMsg_HwUrl *urlMsg;
@property (retain, nonatomic) HwDeviceMsg_HwVideo *videoMsg;

+ (void)initialize;

@end
