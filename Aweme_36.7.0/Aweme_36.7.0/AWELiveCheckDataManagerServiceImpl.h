@class NSString, NSMutableDictionary, NSHashTable;

@interface AWELiveCheckDataManagerServiceImpl : NSObject <AWELiveVideoFeedUpdateMessage, AWELiveCheckDataManagerService>

@property (nonatomic) long long pageIdentifier;
@property (retain, nonatomic) NSMutableDictionary *modelsDictionary;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceWithPageIdentifier:(long long)a0;
+ (id)sharedInstance;

- (void)registerMessage;
- (void)subscribedLiveStatusChange:(id)a0;
- (void)subscribeLiveCheckWithModels:(id)a0 viewIdentifier:(long long)a1 pageIdentifier:(long long)a2;
- (void)checkPageIdentifier:(long long)a0;
- (void)addDictWithModels:(id)a0 viewIdentifier:(long long)a1;
- (id)mergeModels;
- (void)subscribeToLiveCheckWithMergedModels:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
