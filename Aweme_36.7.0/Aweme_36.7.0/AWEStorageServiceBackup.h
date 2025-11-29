@class AWEStorageFilePermanent, MMKV;

@interface AWEStorageServiceBackup : NSObject {
    MMKV *_backupMMKV;
    AWEStorageFilePermanent *_backupStorageFile;
}

+ (id)sharedInstance;

- (id)syncReadObjectForKeyFromStorageFile:(id)a0;
- (id)objectForKey:(id)a0 withMetaData:(id)a1;
- (float)floatForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeValueForKey:(id)a0;

@end
