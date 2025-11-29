@class NSString;

@interface WCNotificationArrivalReportService : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleVoIPPushInfo:(id)a0;

- (void)cook;
- (void)onServiceInit;
- (void)onServiceEnterForeground;

@end
