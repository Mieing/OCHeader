@class NSString, TTAccountKeyChainStore;

@interface TTAccountStore : NSObject

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *accessGroupName;
@property (retain, nonatomic) TTAccountKeyChainStore *keychainStore;

+ (id)storeWithServiceName:(id)a0 accessGroup:(id)a1;
+ (void)tt_setNumber:(id)a0 forKey:(id)a1;
+ (void)tt_setString:(id)a0 forKey:(id)a1;
+ (void)tt_setArray:(id)a0 forKey:(id)a1;
+ (void)tt_setDictionary:(id)a0 forKey:(id)a1;
+ (void)tt_setData:(id)a0 forKey:(id)a1;
+ (BOOL)tt_boolForKey:(id)a0;
+ (id)tt_numberForKey:(id)a0;
+ (id)tt_stringForKey:(id)a0;
+ (id)tt_arrayForKey:(id)a0;
+ (id)tt_dictionaryForKey:(id)a0;
+ (id)tt_dataForKey:(id)a0;
+ (void)tt_setNumber:(id)a0 forKey:(id)a1 service:(id)a2 accessGroup:(id)a3;
+ (void)tt_setString:(id)a0 forKey:(id)a1 service:(id)a2 accessGroup:(id)a3;
+ (void)tt_setBool:(BOOL)a0 forKey:(id)a1;
+ (void)tt_setBool:(BOOL)a0 forKey:(id)a1 service:(id)a2 accessGroup:(id)a3;
+ (void)tt_setArray:(id)a0 forKey:(id)a1 service:(id)a2 accessGroup:(id)a3;
+ (void)tt_setDictionary:(id)a0 forKey:(id)a1 service:(id)a2 accessGroup:(id)a3;
+ (void)tt_setData:(id)a0 forKey:(id)a1 service:(id)a2 accessGroup:(id)a3;
+ (BOOL)tt_boolForKey:(id)a0 service:(id)a1 accessGroup:(id)a2;
+ (id)tt_numberForKey:(id)a0 service:(id)a1 accessGroup:(id)a2;
+ (id)tt_stringForKey:(id)a0 service:(id)a1 accessGroup:(id)a2;
+ (id)tt_arrayForKey:(id)a0 service:(id)a1 accessGroup:(id)a2;
+ (id)tt_dictionaryForKey:(id)a0 service:(id)a1 accessGroup:(id)a2;
+ (id)tt_dataForKey:(id)a0 service:(id)a1 accessGroup:(id)a2;
+ (id)sharedStore;

- (BOOL)tt_removeItemForKey:(id)a0;
- (id)tt_dictionaryForKey:(id)a0 error:(id *)a1;
- (void)tt_setDictionary:(id)a0 forKey:(id)a1 error:(id *)a2;
- (void)tt_setString:(id)a0 forKey:(id)a1;
- (void)tt_setArray:(id)a0 forKey:(id)a1;
- (void)tt_setDictionary:(id)a0 forKey:(id)a1;
- (void)tt_setData:(id)a0 forKey:(id)a1;
- (BOOL)tt_boolForKey:(id)a0;
- (id)tt_numberForKey:(id)a0;
- (id)tt_stringForKey:(id)a0;
- (id)tt_arrayForKey:(id)a0;
- (id)tt_dictionaryForKey:(id)a0;
- (id)tt_dataForKey:(id)a0;
- (void)tt_setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (id)tt_dataForKey:(id)a0 error:(id *)a1;
- (id)tt_allKeys;
- (id)tt_allItems;
- (BOOL)tt_removeAllItems;
- (void).cxx_destruct;
- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)initWithService:(id)a0 accessGroup:(id)a1;

@end
