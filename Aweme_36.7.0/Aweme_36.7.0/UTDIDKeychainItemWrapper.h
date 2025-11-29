@class NSMutableDictionary;

@interface UTDIDKeychainItemWrapper : NSObject

@property (retain, nonatomic) NSMutableDictionary *keychainItemData;
@property (retain, nonatomic) NSMutableDictionary *genericPasswordQuery;

- (id)initWithIdentifier:(id)a0 accessGroup:(id)a1;
- (id)objectForKey:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)resetKeychainItem;
- (id)dictionaryToSecItemFormat:(id)a0;
- (id)secItemFormatToDictionary:(id)a0;
- (void)writeToKeychain;

@end
