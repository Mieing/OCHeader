@class BDPAlertController, BDPUniqueID, NSString;
@protocol BDPOnlineTimeReporterDelegate;

@interface BDPOnlineTimeReporter : NSObject <BDPOnlineTimeReportedNotifyDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAlertController *offlineAlertViewController;
@property (nonatomic) BOOL isAuthenticating;
@property (weak, nonatomic) id<BDPOnlineTimeReporterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopReport;
- (void)startReport;
- (void)onlineTimeReportedTask:(id)a0 callbackResult:(unsigned long long)a1;
- (void)onlineTimeReportedTask:(id)a0 networkStatus:(long long)a1 callbackResult:(unsigned long long)a2;
- (BOOL)enableReporter;
- (BOOL)_beforeCheckHasHandledWithReportedTask:(id)a0 networkStatus:(unsigned long long)a1;
- (void)_showAntiAddictionAlertWithReportedTask:(id)a0 result:(unsigned long long)a1;
- (void)_showHostAuthAlertViewWithReportedTask:(id)a0;
- (void)_checkGuideViewBeforeAuthenticationWithReportedTask:(id)a0;
- (void)_showLoginViewBeforeAuthenticationWithReportedTask:(id)a0;
- (BOOL)_shouldShowTeenModeAlerViewWithReportedTask:(id)a0;
- (void)_showTeenModeAlertViewWithReportedTask:(id)a0;
- (void)_showOffLineAlertView:(id)a0 completion:(id /* block */)a1;
- (void)fetchGiftConfigWithBlock:(id /* block */)a0;
- (void)_showGuideDetentionViewWithAlertType:(unsigned long long)a0 isLogin:(BOOL)a1 reportedTask:(id)a2 dismissCompletion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithUniqueID:(id)a0;

@end
