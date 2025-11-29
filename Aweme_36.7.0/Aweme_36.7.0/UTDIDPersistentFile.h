@class NSString, NSFileManager, NSMutableDictionary;

@interface UTDIDPersistentFile : NSObject {
    NSFileManager *mDefaultFileManager;
    NSString *mOurDocumentPath;
    NSString *mFilePath;
    NSMutableDictionary *mData;
}

+ (id)createWithFile:(id)a0 and:(id)a1;

- (void)setDataDict:(id)a0;
- (id)dataDict;
- (void)checkPath;
- (void)create:(id)a0 and:(id)a1;
- (void).cxx_destruct;
- (void)clear;
- (void)reload;
- (id)objectForKey:(id)a0;
- (void)save;
- (void)commit;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;
- (void)initData;

@end
