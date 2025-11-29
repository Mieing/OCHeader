@class NSString, BDPUniqueID, NSTimer;
@protocol BDPOnlineTimeReportedNotifyDelegate;

@interface BDPOnlineTimeReportedTask : NSObject {
    BOOL _isLogin;
    BOOL _isReporting;
    BOOL _isFirstReported;
    BOOL _needReportLaunchEventReport;
    double _period;
}

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *deviceId;
@property (copy, nonatomic) NSString *hostId;
@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL needAuthenticationGuide;
@property (nonatomic) BOOL hasAuthentication;
@property (nonatomic) BOOL hasRequestError;
@property (weak, nonatomic) id<BDPOnlineTimeReportedNotifyDelegate> notifyDelegate;

- (void)eventMpLaunchResultWithLoginResult:(unsigned long long)a0 UniqueId:(id)a1;
- (id)initWithUniqueID:(id)a0 hostId:(id)a1 period:(double)a2;
- (void)requestHostAuthenticationInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
