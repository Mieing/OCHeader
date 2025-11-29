@class NSDictionary, NSString, AWEAwemeModel;

@interface AWEAntiAddictedOptTimeManager : NSObject <AWEAppAwemeSettingMessage, AWEAntiAddictedOptTimeManager>

@property (copy, nonatomic) NSDictionary *settingConfig;
@property (copy, nonatomic) NSDictionary *userSessionInfo;
@property (nonatomic) double currentSessionTimeInterval;
@property (nonatomic) BOOL isAwemeUserReady;
@property (nonatomic) BOOL isABTestReady;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)awemeSettingDidChange;
- (id)awemeID;
- (BOOL)notOpenAntiAddicted;
- (void)handleABTestChange:(id)a0;
- (void)_handleCellDisplay:(id)a0 endDisplay:(BOOL)a1;
- (void)_startTimingForCurrentSession;
- (void)_resetUserInfo;
- (id)popupText;
- (void)handleCellWillDisplay:(id)a0;
- (void)handleCellDidEndDisplay:(id)a0;
- (BOOL)isAntiAddictedWeakRemindModel:(id)a0;
- (BOOL)shouldExecuteAntiAddictedOpt;
- (void)handleStrongRemindClick:(id)a0;
- (void)_pauseTimingForCurrentSession;
- (void)_requestUserSessionInfo;
- (void).cxx_destruct;
- (id)init;

@end
