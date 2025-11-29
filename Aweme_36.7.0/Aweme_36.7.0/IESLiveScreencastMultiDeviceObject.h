@class NSString;

@interface IESLiveScreencastMultiDeviceObject : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long deviceType;
@property (copy, nonatomic) NSString *sourceIp;
@property (nonatomic) BOOL isOpenLive;
@property (nonatomic) long long connectDuration;
@property (nonatomic) BOOL isFromPC;
@property (nonatomic) BOOL isAndroid;
@property (nonatomic) unsigned long long frameRate;
@property (nonatomic) BOOL isMobileMicrophone;
@property (nonatomic) long long screenWidth;
@property (nonatomic) long long screenHeight;
@property (nonatomic) BOOL isIPad;

- (void).cxx_destruct;

@end
