@class NSCache, NSMutableDictionary;

@interface MMHeadImageCacher : MMObject {
    NSMutableDictionary *_dictUseScene2MemoryCache;
    NSCache *_originContactsHeadImgCache;
}

- (id)init;
- (id)getHeadImage:(const struct HeadImgUseSceneConfig { unsigned char x0; Class x1; id x2; BOOL x3; struct CGSize { double x0; double x1; } x4; unsigned int x5; unsigned char x6; } *)a0 usrName:(id)a1 withCategory:(unsigned char)a2 retHeadImgIsExistedLocal:(BOOL *)a3;
- (id)loadImageFromLocal:(id)a0 withCategory:(unsigned char)a1 isHD:(BOOL)a2;
- (BOOL)isHeadImgExistInLocal:(id)a0;
- (BOOL)isHeadImgExistInLocal:(id)a0 isHD:(BOOL)a1;
- (void)moveTmpImageToTargetInLocal:(id)a0 withCategory:(unsigned char)a1;
- (void)discardCachedHeadImg:(id)a0;
- (void)deleteHeadImageForBrand:(id)a0;
- (void)deleteUsrHeadImg:(id)a0;
- (void)deleteUsrHDHeadImgFromLocal:(id)a0;
- (BOOL)saveUsrImgToLocal:(id)a0 withFile:(id)a1 forCategory:(unsigned char)a2 isHD:(BOOL)a3;
- (BOOL)saveUsrImgToLocal:(id)a0 withData:(id)a1 forCategory:(unsigned char)a2 isHD:(BOOL)a3 forceReload:(BOOL)a4 saveAsTemp:(BOOL)a5;
- (BOOL)saveImgDataToFile:(id)a0 file:(id)a1;
- (BOOL)createEmptyUsrImgInLocal:(id)a0;
- (void)fixSelfHeadImgByLocalImg;
- (void)cleanupAllMemoryCache;
- (unsigned long long)cleanAllHeadImage;
- (id)getImgSavePath:(id)a0 forCategory:(unsigned char)a1 isHD:(BOOL)a2;
- (BOOL)deleteUsrHeadImgFromLocal:(id)a0 isHD:(BOOL)a1;
- (void)deleteBrandHeadImageFromLocal:(id)a0;
- (void)discardCachedHeadImgInMemory:(id)a0;
- (void)discardCachedHeadImgInFIC:(id)a0;
- (BOOL)translateHeadImg:(id)a0 toCategory:(unsigned char)a1 fromPath:(id)a2 isHD:(BOOL)a3;
- (BOOL)translateOldHeadImg:(id)a0 toCategory:(unsigned char)a1 isHD:(BOOL)a2;
- (id)memoryCacheForUseScene:(unsigned char)a0;
- (void)saveHeadImgToMemoryCacheIfNeed:(const struct HeadImgUseSceneConfig { unsigned char x0; Class x1; id x2; BOOL x3; struct CGSize { double x0; double x1; } x4; unsigned int x5; unsigned char x6; } *)a0 usrName:(id)a1 headImg:(id)a2;
- (void)cleanupTempMemoryCache:(id)a0;
- (void).cxx_destruct;

@end
