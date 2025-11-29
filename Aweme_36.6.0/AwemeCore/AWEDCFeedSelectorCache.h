@class Protocol, NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AWEDCFeedSelectorCache : NSObject

@property (readonly, nonatomic) Protocol *protocol;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) BOOL hasLoadedSelector;
@property (retain, nonatomic) NSArray *selectorStringArray;
@property (nonatomic) unsigned long long checkIndex;
@property (nonatomic) BOOL loadCacheFinished;
@property (retain, nonatomic) NSDictionary *selectorCache;

- (id)aliveObjectsFromValueArray:(id)a0;
- (void)loadSelectors;
- (id)getAllSelectorsFromProtocolHierarchy:(id)a0;
- (id)getAllProtocolsInHierarchy:(id)a0;
- (id)getSelectorsFromProtocol:(id)a0;
- (id)targetsWithSelector:(SEL)a0;
- (void)reloadWithTargets:(id)a0;
- (void)preloadSelectors;
- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;

@end
