@class AWEPaidStreamUIConfig, AWEPaidAuthConfig, NSString;

@interface AWEPaidStreamConfig : NSObject

@property (retain, nonatomic) AWEPaidStreamUIConfig *uiConfig;
@property (retain, nonatomic) AWEPaidAuthConfig *authConfig;
@property (nonatomic) long long paidScene;
@property (nonatomic) long long paidChannel;
@property (nonatomic) unsigned long long paidLaunchSource;
@property (copy, nonatomic) NSString *customTrialPersistKey;
@property (copy, nonatomic) NSString *paidPanelURLString;
@property (copy, nonatomic) id /* block */ paidPanelURLParamsHandler;
@property (nonatomic) double initialTrialTime;
@property (nonatomic) double maxTrialDuration;
@property (nonatomic) BOOL forbidTimeForStreamStop;
@property (nonatomic) long long screenCaptureMode;
@property (nonatomic) BOOL forbidBlock;
@property (nonatomic) BOOL forbidSecurity;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) unsigned long long useRTSImplModule;

- (void).cxx_destruct;
- (id)init;

@end
