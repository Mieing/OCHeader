@class NSString;

@interface WCMusicCacheId : NSObject <PBCoding>

@property (copy, nonatomic) NSString *innerCacheId;
@property (nonatomic) BOOL ignoreCache;
@property (copy, nonatomic) NSString *musicId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_innerCacheId;
+ (void)PBArrayAdd_ignoreCache;
+ (void)PBArrayAdd_musicId;
+ (void)initialize;
+ (id)cacheIdWithInnerCacheId:(id)a0 cacheUrl:(id)a1 dataUrl:(id)a2;
+ (id)hashForUrl:(id)a0;
+ (id)cacheIdFromKSCacheId:(id)a0;
+ (id)safeFileNameFromBase64String:(id)a0;
+ (id)base64StringFromSafeFileName:(id)a0;
+ (id)replacedStringWithInput:(id)a0 charMap:(id)a1;

- (id)getPBPropertyTable;
- (id)generateKSCacheId;
- (void).cxx_destruct;

@end
