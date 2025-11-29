@class NSString;

@interface WCAdExpressionGeneralJumpInfo : NSObject

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *uxInfo;
@property (nonatomic) unsigned long long appointmentId;
@property (retain, nonatomic) NSString *canvasId;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) NSString *weappUserName;
@property (retain, nonatomic) NSString *weappPath;
@property (nonatomic) unsigned int weappVersion;
@property (nonatomic) int miniProgramType;

- (void).cxx_destruct;

@end
