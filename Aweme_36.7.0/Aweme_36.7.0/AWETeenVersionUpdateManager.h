@class NSString;

@interface AWETeenVersionUpdateManager : NSObject <AWEAlertProtocol>

@property (copy, nonatomic) id /* block */ onClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isTeenUpgradeAlertOptimizeEnable;

- (BOOL)canShow;
- (void)showWithCloseCallback:(id /* block */)a0;
- (id)currentAppVersion;
- (BOOL)forceUpgradeCheckEncryptionEnable;
- (void)requestNewVersion;
- (BOOL)checkEncryption;
- (void)updatePopupShowTrack;
- (void)p_showUpgradeAlert;
- (id)versionUpdateAlertConfig;
- (BOOL)versionCompareForUpgrade;
- (void)updatePopupClickTrackWithCancel:(BOOL)a0;
- (void)updatePopupTrack:(BOOL)a0 cancel:(BOOL)a1;
- (void)close;
- (void).cxx_destruct;

@end
