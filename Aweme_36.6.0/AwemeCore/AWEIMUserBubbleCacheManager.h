@class NSString, BDImageCache, HMDThreadSafeDictionary;

@interface AWEIMUserBubbleCacheManager : NSObject <AWEIMUserBubbleCacheManagerProtocol>

@property (retain, nonatomic) BDImageCache *customBubbleCache;
@property (retain, nonatomic) HMDThreadSafeDictionary *flexSettingDict;
@property (retain, nonatomic) HMDThreadSafeDictionary *otherBubbleDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)memoryImageForKey:(id)a0;
- (void)saveImageToMemoryCache:(id)a0 forKey:(id)a1;
- (id)localImageForKey:(id)a0;
- (void)removeLocalImageForKey:(id)a0;
- (void)saveImageToDiskCache:(id)a0 forKey:(id)a1;
- (id)getMemoryFlexSettingWithBubbleID:(id)a0;
- (void)setMemoryFlexSetting:(id)a0 WithBubbleID:(id)a1;
- (id)getDiskFlexSettingWithBubbleID:(id)a0;
- (void)setDiskFlexSetting:(id)a0 WithBubbleID:(id)a1;
- (id)getCacheFlexSettingWithBubbleID:(id)a0;
- (id)getMemoryOtherBubbleSettingWithBubbleID:(id)a0;
- (void)setMemoryOtherBubbleSetting:(id)a0 WithBubbleID:(id)a1;
- (id)getDiskOtherSettingWithBubbleID:(id)a0;
- (void)setDiskOtherSetting:(id)a0 WithBubbleID:(id)a1;
- (id)getCacheOtherSettingWithBubbleID:(id)a0;
- (long long)getDiskVersionWithBubbleID:(id)a0;
- (void)setDiskVersion:(long long)a0 WithBubbleID:(id)a1;
- (id)diskImageForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)imageCache;

@end
