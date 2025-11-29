@class NSString, AppCommunicateData;

@interface OpenApiLaunchContext : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *sourceInfo;
@property (retain, nonatomic) NSString *bizInfo;
@property (retain, nonatomic) AppCommunicateData *appCommunicateData;
@property (retain, nonatomic) NSString *safetyControlReportStr;
@property (retain, nonatomic) NSString *currentPageUrl;
@property (retain, nonatomic) NSString *currentWeAppId;
@property (nonatomic) BOOL needWritePasteBoard;

- (BOOL)isAppCommunicateDataValid;
- (void).cxx_destruct;

@end
