@class NSString, BDPGameUserScopeSettingItemConfig, BDPGameUserScopePopupConfig;

@interface BDPGameUserScopeAuthRecord : NSObject

@property (copy, nonatomic) NSString *scope_abbreviation;
@property (nonatomic) long long auth_status;
@property (nonatomic) BOOL setting_popup;
@property (retain, nonatomic) BDPGameUserScopeSettingItemConfig *setting_item_config;
@property (retain, nonatomic) BDPGameUserScopePopupConfig *popup_config;

- (void).cxx_destruct;

@end
