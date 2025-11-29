@class NSArray, NSString;

@interface WCPayBalanceMenuInfo : NSObject <PBCoding>

@property (nonatomic) BOOL is_show_menu;
@property (retain, nonatomic) NSArray *balance_menu_item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_is_show_menu;
+ (void)PBArrayAdd_balance_menu_item;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;

- (id)getPBPropertyTable;
- (void)genFromDic:(id)a0;
- (void).cxx_destruct;

@end
