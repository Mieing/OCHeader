@class NSMutableDictionary;

@interface SingleItemWrapper : NSObject

@property (retain) NSMutableDictionary *keychainItemData;
@property (retain) NSMutableDictionary *genericPasswordQuery;

- (id)initWithIdentifier:(id)a0 accessGroup:(id)a1;
- (void)dealloc;
- (BOOL)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (void)resetKeychainItem;
- (id)dictionaryToSecItemFormat:(id)a0;
- (id)secItemFormatToDictionary:(id)a0;
- (void)writeToKeychain;

@end
