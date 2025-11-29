@class NSString;

@interface WCPayBindCardListApplyNewCardInfo : NSObject <PBCoding>

@property (nonatomic) long long menu_jump_type;
@property (retain, nonatomic) NSString *menu_jump_url;
@property (retain, nonatomic) NSString *menu_username;
@property (retain, nonatomic) NSString *menu_path;
@property (retain, nonatomic) NSString *menu_title;
@property (retain, nonatomic) NSString *menu_icon_url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_menu_jump_type;
+ (void)PBArrayAdd_menu_jump_url;
+ (void)PBArrayAdd_menu_username;
+ (void)PBArrayAdd_menu_path;
+ (void)PBArrayAdd_menu_title;
+ (void)PBArrayAdd_menu_icon_url;
+ (void)initialize;
+ (id)genFromDictionary:(id)a0;
+ (void)saveFromDictionary:(id)a0 withScene:(int)a1;
+ (id)loadFromFileWithScene:(int)a0;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
