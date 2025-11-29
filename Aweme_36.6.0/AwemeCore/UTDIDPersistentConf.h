@class NSMutableDictionary, NSString, UTDIDPersistentFile, UTDIDKeychainItemWrapper;

@interface UTDIDPersistentConf : NSObject {
    UTDIDKeychainItemWrapper *mKeyChainWrapper;
    UTDIDPersistentFile *mPersistentFile;
    NSMutableDictionary *mDict;
    NSString *mIdentifier;
    BOOL mIsModified;
}

@property BOOL mAlwaysSyncWhenCommit;

+ (id)initWithIdentifier:(id)a0;

- (void)syncToPF:(id)a0;
- (void)syncToKC:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)objectForKey:(id)a0;
- (void)commit;
- (void)removeObjectForKey:(id)a0;
- (void)reset;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)syncData;
- (void)initData;
- (void)create:(id)a0;

@end
