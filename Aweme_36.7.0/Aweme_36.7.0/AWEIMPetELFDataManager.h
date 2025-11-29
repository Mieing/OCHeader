@class HMDThreadSafeDictionary;

@interface AWEIMPetELFDataManager : NSObject

@property (retain, nonatomic) HMDThreadSafeDictionary *dict;
@property (retain, nonatomic) HMDThreadSafeDictionary *stickerDataDict;

+ (id)shareInstance;
+ (id)sharedQueue;

- (void)removeAllDiskCache;
- (id)getMomeryStickersWithShortConID:(id)a0;
- (id)petELFDirectorForShortConID:(id)a0;
- (void)setMomeryStickersWithShortConID:(id)a0 stickers:(id)a1;
- (void)asyncGetDiskCacheListWithCachePath:(id)a0 completion:(id /* block */)a1;
- (void)removeMemoryWithShortConID:(id)a0;
- (void)removeDiskCacheWithShortConID:(id)a0;
- (id)getExtVersionWithCon:(id)a0;
- (id)getDiskVersionWithShortConID:(id)a0;
- (id)getMemoryVersionWithShortConID:(id)a0;
- (long long)getSettingsDefaultEmojiVersion;
- (id)getMomeryEmoticonModelArrWithShortConID:(id)a0;
- (id)petELFdirectorForLoginUser;
- (void)setMomeryVersionWithShortConID:(id)a0 version:(id)a1;
- (void)setDiskVersionWithShortConID:(id)a0 version:(id)a1;
- (long long)getMomeryCountWithShortConID:(id)a0;
- (void)setMomeryCountWithShortConID:(id)a0 count:(long long)a1;
- (void)setMomeryEmoticonModelArrWithShortConID:(id)a0 emoticonModelArr:(id)a1;
- (void)removeAllMemoryStickers;
- (void)asyncUpdateDiskCacheListWithStickers:(id)a0 cachePath:(id)a1 competion:(id /* block */)a2;
- (void).cxx_destruct;

@end
