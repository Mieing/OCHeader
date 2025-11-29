@class NSString, NSDictionary;

@interface APRiskReportResponse : NSObject

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSString *resultCode;
@property (retain, nonatomic) NSString *apdid;
@property (retain, nonatomic) NSString *token;
@property (retain, nonatomic) NSString *currentTime;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *vkeySwitch;
@property (retain, nonatomic) NSString *bugTrackSwitch;
@property (retain, nonatomic) NSString *appListVer;
@property (retain, nonatomic) NSString *dynamicKey;
@property (retain, nonatomic) NSDictionary *resultData;

- (void).cxx_destruct;

@end
