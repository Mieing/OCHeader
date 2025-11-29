@class MMKV;

@interface AWEStorageServiceMetaDataManager : NSObject {
    MMKV *_mmkv;
}

+ (id)manager;

- (id)makeMetaDataKeyWithDomain:(id)a0 key:(id)a1;
- (void)removeMetaDataForKey:(id)a0;
- (id)makeKeyWithMetaKey:(id)a0;
- (void)setupMMKV;
- (void)releaseMMKV;
- (void).cxx_destruct;
- (void)setMetaData:(id)a0 forKey:(id)a1;
- (id)init;
- (id)metaDataForKey:(id)a0;

@end
