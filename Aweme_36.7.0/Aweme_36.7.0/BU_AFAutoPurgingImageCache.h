@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BU_AFAutoPurgingImageCache : NSObject <BU_AFImageRequestCache>

@property (retain, nonatomic) NSMutableDictionary *cachedImages;
@property (nonatomic) unsigned long long currentMemoryUsage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic) unsigned long long memoryCapacity;
@property (nonatomic) unsigned long long preferredMemoryUsageAfterPurge;
@property (readonly, nonatomic) unsigned long long memoryUsage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMemoryCapacity:(unsigned long long)a0 preferredMemoryCapacity:(unsigned long long)a1;
- (void)addImage:(id)a0 withIdentifier:(id)a1;
- (BOOL)removeImageWithIdentifier:(id)a0;
- (id)imageWithIdentifier:(id)a0;
- (id)imageCacheKeyFromURLRequest:(id)a0 withAdditionalIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)removeAllImages;

@end
