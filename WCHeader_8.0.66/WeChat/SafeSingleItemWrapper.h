@class NSString, NSMutableDictionary, SingleItemWrapper;

@interface SafeSingleItemWrapper : NSObject {
    SingleItemWrapper *wapper;
    NSMutableDictionary *wapperDict;
    NSString *filePath;
}

- (id)dataSafeFilePathWithName:(id)a0;
- (id)initSafeWithIdentifier:(id)a0 accessGroup:(id)a1;
- (BOOL)setFileStoreObject:(id)a0 forKey:(id)a1;
- (id)fileStoreForKey:(id)a0;
- (id)keyChainStoreForKey:(id)a0;
- (void)resetSafeKeychainItem;
- (void)dealloc;

@end
