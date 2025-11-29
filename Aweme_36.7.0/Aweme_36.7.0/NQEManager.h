@class NSMapTable;

@interface NQEManager : NSObject

@property (retain, nonatomic) NSMapTable *networkQualityObservers;

+ (id)shareInstance;

- (void)regNQEObserver:(id)a0 queue:(id)a1;
- (void)unregNQEObserver:(id)a0;
- (void)notifyNetworkQualityType:(int)a0;
- (void).cxx_destruct;
- (id)init;

@end
