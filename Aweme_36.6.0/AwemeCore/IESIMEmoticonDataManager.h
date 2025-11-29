@class NSDictionary, NSArray, YYMemoryCache;
@protocol IESIMEmoticonDependency;

@interface IESIMEmoticonDataManager : NSObject {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (readonly, nonatomic) id<IESIMEmoticonDependency> dependency;
@property (retain, nonatomic) NSDictionary *emoticonYYTextMapper;
@property (retain, nonatomic) NSDictionary *emoticonIconToTitleMapper;
@property (retain, nonatomic) NSArray *staticEmoticons;
@property (retain) NSDictionary *fullStaticEmoticonDictionary;
@property (retain, nonatomic) NSArray *localStaticEmoticonInfos;
@property (retain, nonatomic) YYMemoryCache *emoticonYYCache;
@property (nonatomic) long long imageScale;

+ (id)preloadLocalStaticEmoticons;
+ (id)p_loadLocalStaticEmoticons;
+ (id)p_loadLocalStaticEmoticonFromPlistPath:(id)a0;
+ (id)sharedInstance;

- (id)emoticonWithTagName:(id)a0;
- (id)emoticonImageNamed:(id)a0;
- (id)resourceMD5;
- (void)handleMemoryWarning;
- (void)p_setUp;
- (id)getEmoticonResourcePathWithName:(id)a0;
- (long long)getImageScale;
- (id)p_emoticonImageNamed:(id)a0;
- (void)p_updateLittleEmoticonData;
- (void)p_updateLittleEmoticonDataWithEmoticonsOpt:(id)a0;
- (void)p_updateLittleEmoticonDataWithEmoticons:(id)a0;
- (void)p_deduplicateEmojiWithEmoticonDict:(id)a0 titleIconMapper:(id)a1;
- (void)p_updateLocalStaticEmoticonInfos;
- (id)p_finalRecentlyUsedWithRecentlyUsed:(id)a0 emoticonDict:(id)a1 emoticonTitles:(id)a2;
- (id)emoticonWithImageMapperKey:(id)a0;
- (void)reloadUpdatedEmoticonDataFromPlistPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
