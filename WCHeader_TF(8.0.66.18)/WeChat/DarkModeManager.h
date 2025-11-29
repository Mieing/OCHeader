@class NSString;

@interface DarkModeManager : MMUserService <WCMainWindowExt, MMServiceProtocol>

@property (nonatomic) BOOL skipNextReport;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)launchReport;
- (void)changeDarkModeConfigType:(long long)a0;
- (void)mm_traitCollectionDidChange:(id)a0;
- (void)onAppWillResignActive:(id)a0;
- (void)onAppDidEnterBackground:(id)a0;
- (void)onAppWillEnterForeground:(id)a0;
- (void)reportAction:(long long)a0;

@end
