@class NSString, BDImageCache, NSObject;
@protocol OS_dispatch_queue;

@interface ACCAdvanceEditImageCache : NSObject <DVEImageCacheProtocol>

@property (retain, nonatomic) BDImageCache *imageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) unsigned long long memoryCacheCountLimit;
@property (nonatomic) unsigned long long memoryCacheCostLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)containsImageForKey:(id)a0;
- (id)getImageForKey:(id)a0;
- (void)setupWithPath:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0 forKey:(id)a1;

@end
