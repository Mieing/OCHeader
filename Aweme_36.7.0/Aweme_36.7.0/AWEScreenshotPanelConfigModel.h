@class NSMutableArray, AWEScreenshotPanelConfigItemModel, AWESettingItemModel;

@interface AWEScreenshotPanelConfigModel : NSObject

@property (retain, nonatomic) AWEScreenshotPanelConfigItemModel *showPanelSwitchModel;
@property (retain, nonatomic) AWEScreenshotPanelConfigItemModel *showUserInfoSwitchModel;
@property (retain, nonatomic) AWESettingItemModel *parentPanelCellItem;
@property (retain, nonatomic) NSMutableArray *itemsArray;

- (void)updateScreenShootPanelShowSwitch:(BOOL)a0;
- (void)updateScreenShootPanelShowItem;
- (BOOL)isScreenShootPanelShowSwitchOn;
- (BOOL)isScreenShootPanelShowUserSwitchOn;
- (void)updateScreenShootPanelShowUserSwitch:(BOOL)a0;
- (void)updateScreenShootPanelShowUserItem;
- (void).cxx_destruct;

@end
