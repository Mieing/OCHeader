@class UIViewController;
@protocol AFDPrivacyHalfScreenViewControllerProtocol;

@interface AWEDCFeedSwitchPreViewViewSettingManager : NSObject

@property (nonatomic) BOOL switchState;
@property (retain, nonatomic) UIViewController<AFDPrivacyHalfScreenViewControllerProtocol> *doubleColumnEntryVC;
@property (nonatomic) BOOL openPanel;

+ (id)sharedInstance;

- (BOOL)isDoubleColumnEntrySwitchON;
- (BOOL)c2RecommendEntrySettingSwitchDefaultOff;
- (void)setDoubleColumnEntrySwitch:(BOOL)a0;
- (void)showSwitchPreviewViewPanel:(BOOL)a0 isShowToast:(BOOL)a1 enterMethod:(id)a2;
- (void)dismissPreviewViewPanel;
- (BOOL)isShowPanelInSettingPage;
- (void).cxx_destruct;
- (id)init;

@end
