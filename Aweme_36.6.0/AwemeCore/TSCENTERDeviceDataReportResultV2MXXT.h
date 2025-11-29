@class NSString, NSDictionary;

@interface TSCENTERDeviceDataReportResultV2MXXT : TSCENTERBaseResultMXXT

@property (retain, nonatomic) NSString *apdid;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *currentTime;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *vkeySwitch;
@property (retain, nonatomic) NSString *bugTrackSwitch;
@property (retain, nonatomic) NSString *appListVer;
@property (retain, nonatomic) NSString *dynamicKey;
@property (retain, nonatomic) NSDictionary *resultData;

+ (Class)resultDataElementClass;

- (void).cxx_destruct;

@end
