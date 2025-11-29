@class NSString;

@interface AWEFeedHomepageLongPressManager : NSObject <AWEFeedHomepageLongPressEditViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)homepageClickActionType;
+ (BOOL)enableDataPreloadWhenTouch;
+ (BOOL)enableVCPreloadWhenTouch;
+ (BOOL)canShowHomepageBottomTabEntry;
+ (void)showGuide;
+ (BOOL)longPressHomepageShouldShowPanel;
+ (id)getLongPressHomepageSettingPagePanelVC;
+ (BOOL)enableLongPressHomepageShowSettingPanel;
+ (id)settingPanelArray;
+ (BOOL)hasHomepageBottomTabEntrySettingEntry;
+ (id)getSwitchIconImageByTheme:(long long)a0;
+ (id)getTitleByID:(id)a0;
+ (id)getImageByID:(id)a0 theme:(long long)a1;
+ (BOOL)needShowSubTitle:(id)a0;
+ (id)getSubTitleText;
+ (long long)getLongPressPanelVersion;
+ (BOOL)enableClickDirectToC2;
+ (id)defaultSettingID;
+ (id)getTrackStatusFromSelectID:(id)a0;
+ (void)trackSquareHomeviewSettingClick:(id)a0 enterMethod:(id)a1 iconStatus:(BOOL)a2;
+ (id)homepageLongPressSettingDict;
+ (BOOL)enableLongPressHomepageGuide;
+ (long long)guideC2StayTime;
+ (long long)guideEnterC2Count;
+ (void)dismissToSingleSnackBar;
+ (BOOL)homepageBottomTabEntryValid;
+ (BOOL)enableHomepageEntrySpecialSettingEntrance;
+ (id)longPressGuideSettingDict;
+ (BOOL)settingEnableHomepageGuide;
+ (long long)guideVersionCode;
+ (long long)guideCount;
+ (id)selectBubbleID;
+ (void)updateLocalStateWithSelectedItem:(id)a0 panel:(id)a1;
+ (void)updateSwitchItem:(id)a0 selectItem:(id)a1 panel:(id)a2;
+ (id)getLongPressHomepageEditPanelVCWithEnterMethod:(id)a0;
+ (void)updateConfig:(id)a0 withTheme:(long long)a1;
+ (void)manualUpdateLocalStateWithDirectSwitchID:(long long)a0;
+ (void)autoUpdateLocalStateWithDirectSwitchID:(long long)a0;
+ (void)enterC2;
+ (void)exitC2;
+ (id)getBubbleTitleWithItem:(id)a0;
+ (BOOL)canShowToSingleSnackBarWithItem:(id)a0;
+ (void)showToSingleSnackBar;
+ (id)guideBubbleID;
+ (BOOL)enable;
+ (id)sharedInstance;

- (void)panel:(id)a0 didSelectItem:(id)a1;
- (void)panel:(id)a0 selectItem:(id)a1 didChangeSwitch:(id)a2;

@end
