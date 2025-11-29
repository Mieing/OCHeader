@class NSString, AWEDanamkuSettingsViewOptionCellConfigModel;

@interface AWEDanmakuSettingPanelGroupModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long groupType;
@property (retain, nonatomic) AWEDanamkuSettingsViewOptionCellConfigModel *config;

+ (id)danmakuSettingPanelGroupModelWithType:(unsigned long long)a0;
+ (long long)cellHeight;

- (void).cxx_destruct;

@end
