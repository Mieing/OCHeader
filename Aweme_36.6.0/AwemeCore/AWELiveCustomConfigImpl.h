@class NSError, NSString;

@interface AWELiveCustomConfigImpl : NSObject <IESLiveCustomConfig>

@property (retain, nonatomic) NSError *walletError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTeenMode;
- (BOOL)isPersonalRecommendSwitchOn;
- (BOOL)isPushNotificationEnabled;
- (BOOL)livePush;
- (long long)whenToPush;
- (void)pushOpenType:(id /* block */)a0;
- (void)updateSettingsWithFieldType:(id)a0 status:(BOOL)a1 requestPage:(id)a2 errorBlock:(id /* block */)a3 successBlock:(id /* block */)a4;
- (BOOL)hasContactsPermission;
- (BOOL)shouldForbidWallet;
- (id)forbidWalletError;
- (BOOL)audienceAllowWatchNotInWifi:(unsigned long long)a0;
- (void)setAudienceAllowWatchNotInWifi:(BOOL)a0;
- (BOOL)isiPadLandscapeMode;
- (BOOL)isiPadAutoRotateMode;
- (void)needDisableHostScreenshot:(BOOL)a0;
- (BOOL)isEnableLiveVisitHistory;
- (BOOL)enableRoomHandleRightSwipeGesture;
- (BOOL)isFTCMode;
- (void).cxx_destruct;

@end
