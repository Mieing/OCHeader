@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDASplashMemoryCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *searchWordsInfo;
@property (nonatomic) BOOL requestAbort;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *realtimeCacheQueue;
@property (nonatomic) BOOL versionUseCache;

+ (id)sharedInstance;

- (id)initPrivate;
- (void).cxx_destruct;
- (id)init;

@end
