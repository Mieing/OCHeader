@class NSObject;
@protocol OS_dispatch_semaphore;

@interface IESMetadataIndexesMap : NSObject {
    struct __CFDictionary { } *_cache;
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (int)indexForMetadata:(id)a0;
- (void)setIndex:(int)a0 forMetadata:(id)a1;
- (void)clearAllIndexes;
- (void).cxx_destruct;
- (id)init;

@end
