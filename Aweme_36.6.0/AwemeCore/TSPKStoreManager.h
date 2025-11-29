@class NSMutableDictionary;

@interface TSPKStoreManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *stores;

+ (id)sharedManager;

- (id)getStoreOfStoreId:(id)a0;
- (void)storeEventData:(id)a0;
- (void)broadcastSaveFailedEvent:(id)a0;
- (void)broadcastSaveSuccessEvent:(id)a0;
- (void)initStoreOfStoreId:(id)a0 storeType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
