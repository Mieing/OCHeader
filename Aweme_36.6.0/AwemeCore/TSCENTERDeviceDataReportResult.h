@class NSString;

@interface TSCENTERDeviceDataReportResult : TSCENTERBaseResult

@property (retain, nonatomic) NSString *apdid;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *currentTime;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *vkeySwitch;
@property (retain, nonatomic) NSString *bugTrackSwitch;
@property (retain, nonatomic) NSString *appListVer;

- (void).cxx_destruct;

@end
