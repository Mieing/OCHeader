@class BaseRequest, NSString, NSMutableArray;

@interface UploadDeviceStepReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSString *deviceType;
@property (nonatomic) unsigned int fromTime;
@property (nonatomic) unsigned int toTime;
@property (nonatomic) unsigned int stepCount;
@property (retain, nonatomic) NSString *systemZone;
@property (retain, nonatomic) NSString *bundleid;
@property (retain, nonatomic) NSString *appname;
@property (nonatomic) unsigned int m7StepCount;
@property (retain, nonatomic) NSString *phoneModel;
@property (retain, nonatomic) NSMutableArray *sourceDevice;
@property (nonatomic) unsigned int hkStepCount;

+ (void)initialize;

@end
