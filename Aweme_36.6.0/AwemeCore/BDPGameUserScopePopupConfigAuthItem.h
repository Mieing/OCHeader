@class NSString;

@interface BDPGameUserScopePopupConfigAuthItem : NSObject

@property (copy, nonatomic) NSString *scope_abbreviation;
@property (copy, nonatomic) NSString *auth_item_icon;
@property (copy, nonatomic) NSString *auth_item_desc;
@property (nonatomic) BOOL can_be_checked;

- (void).cxx_destruct;

@end
