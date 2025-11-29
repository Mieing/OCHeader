@interface BDTGStorageKit : BDTGDanceKit

+ (BOOL)getBoolForKey:(id)a0 enableKeyChain:(BOOL)a1;
+ (void)setYESForKey:(id)a0 enableKeyChain:(BOOL)a1;
+ (void)syncToKeychainIfNeeded:(id)a0 key:(id)a1;
+ (void)setYESForKey:(id)a0;
+ (id)getStringForKey:(id)a0 enableKeyChain:(BOOL)a1;
+ (void)setString:(id)a0 forKey:(id)a1 enableKeyChain:(BOOL)a2;
+ (id)getDataForKey:(id)a0 enableKeyChain:(BOOL)a1;
+ (void)setData:(id)a0 forKey:(id)a1 enableKeyChain:(BOOL)a2;
+ (void)initializeStorage;
+ (void)syncToUserDefaultsIfNeeded:(id)a0 key:(id)a1;
+ (void)setString:(id)a0 forKey:(id)a1;
+ (void)setData:(id)a0 forKey:(id)a1;
+ (id)getDataForKey:(id)a0;
+ (id)getStringForKey:(id)a0;
+ (BOOL)getBoolForKey:(id)a0;

@end
