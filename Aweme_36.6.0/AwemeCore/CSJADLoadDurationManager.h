@class NSMapTable;

@interface CSJADLoadDurationManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _weakCacheLock;
}

@property (retain, nonatomic) NSMapTable *weakCache;
@property (readonly, nonatomic) unsigned long long APPActiveType;

+ (id)sharedManager;

- (void)startTrackAPPActiveType;
- (void)stopTrackAPPActiveType;
- (void)removeADLoadContextWithSlot:(id)a0;
- (void)createADLoadContextWithSlot:(id)a0;
- (id)ADLoadContextWithSlot:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_applicationDidEnterBackground;

@end
