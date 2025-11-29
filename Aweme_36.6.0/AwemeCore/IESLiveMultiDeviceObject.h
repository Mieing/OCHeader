@class NSString;

@interface IESLiveMultiDeviceObject : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long deviceType;
@property (copy, nonatomic) NSString *sourceIp;
@property (nonatomic) BOOL isOpenLive;
@property (nonatomic) long long connectDuration;
@property (nonatomic) BOOL isFromPC;
@property (nonatomic) BOOL isAndroid;
@property (nonatomic) unsigned long long frameRate;
@property (nonatomic) BOOL isMobileMicrophone;

- (void).cxx_destruct;

@end
