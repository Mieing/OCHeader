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

- (void)setHkStepCount:(unsigned int)a0;
- (unsigned int)hkStepCount;
- (void)setSourceDevice:(id)a0;
- (id)sourceDevice;
- (void)setPhoneModel:(id)a0;
- (id)phoneModel;
- (void)setM7StepCount:(unsigned int)a0;
- (unsigned int)m7StepCount;
- (void)setAppname:(id)a0;
- (id)appname;
- (void)setBundleid:(id)a0;
- (id)bundleid;
- (void)setSystemZone:(id)a0;
- (id)systemZone;
- (void)setStepCount:(unsigned int)a0;
- (unsigned int)stepCount;
- (void)setToTime:(unsigned int)a0;
- (unsigned int)toTime;
- (void)setFromTime:(unsigned int)a0;
- (unsigned int)fromTime;
- (void)setDeviceType:(id)a0;
- (id)deviceType;
- (void)setDeviceId:(id)a0;
- (id)deviceId;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
