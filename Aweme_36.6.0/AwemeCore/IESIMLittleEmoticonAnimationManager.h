@class YYMemoryCache, IESIMEmoticonConfig, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IESIMLittleEmoticonAnimationManager : NSObject <IESIMLittleEmoticonAnimationService>

@property (nonatomic) long long version;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) IESIMEmoticonConfig *config;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) YYMemoryCache *cache;
@property (nonatomic) long long resourceID;
@property (copy, nonatomic) NSDictionary *animateUrlList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)loadAnimateResourceWithContext:(id)a0;
- (void)updateAnimateEmojiListWithContext:(id)a0;
- (id)animateImageWithName:(id)a0;
- (id)animateImageUrlWithName:(id)a0;
- (void)removeAllAnimateResource;
- (id)p_readUrlList;
- (BOOL)p_needDonwloadWithContext:(id)a0;
- (void)p_downloadWithContext:(id)a0;
- (void)p_updateResourceIdIfNeededWithContext:(id)a0;
- (void)p_removeOutOfDateIfNeededWithVersion:(long long)a0;
- (BOOL)p_needUpdateUrlListWithContext:(id)a0;
- (void)p_updateUrlListWithContext:(id)a0;
- (id)p_littleEmoticonAnimateResourcePathWithVersion:(long long)a0 autoCreate:(BOOL)a1;
- (void)p_updateFlagsWithContext:(id)a0;
- (void)p_writeList:(id)a0;
- (id)p_resourceZipPath;
- (id)p_littleEmoticonAnimateResourceRootPathWithAutoCreate:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;

@end
