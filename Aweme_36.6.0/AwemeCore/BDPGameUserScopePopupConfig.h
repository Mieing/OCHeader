@class NSString, NSArray, BDPGameUserScopePopupFooterConfig;

@interface BDPGameUserScopePopupConfig : NSObject

@property (nonatomic) long long popup_type;
@property (copy, nonatomic) NSString *auth_entity;
@property (copy, nonatomic) NSString *auth_popup_icon;
@property (copy, nonatomic) NSString *auth_popup_title;
@property (copy, nonatomic) NSString *auth_popup_desc;
@property (copy, nonatomic) NSArray *auth_items;
@property (copy, nonatomic) NSString *auth_popup_image;
@property (retain, nonatomic) BDPGameUserScopePopupFooterConfig *footer_config;

- (id)scopeArray;
- (void)parseAuthItemsWithJson:(id)a0;
- (void).cxx_destruct;

@end
