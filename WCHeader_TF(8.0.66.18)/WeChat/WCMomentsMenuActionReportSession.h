@class WCMomentsMenuActionReportSnsInfo, WCMomentsMenuActionReportForwardInfo;

@interface WCMomentsMenuActionReportSession : MMObject

@property (nonatomic) long long scene;
@property (retain, nonatomic) WCMomentsMenuActionReportSnsInfo *snsInfo;
@property (nonatomic) long long actionType;
@property (retain, nonatomic) WCMomentsMenuActionReportForwardInfo *forwardInfo;

- (void)report;
- (id)generateReportString;
- (id)generateSnsInfoString;
- (id)generateForwardInfoString;
- (void).cxx_destruct;

@end
