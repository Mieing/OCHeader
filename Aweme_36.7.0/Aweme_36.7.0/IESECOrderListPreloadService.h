@class NSMutableDictionary, IESECTracker;

@interface IESECOrderListPreloadService : NSObject

@property (nonatomic) BOOL isPreloading;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) NSMutableDictionary *trackParams;

+ (id)sharedInstance;

- (void)preloadOrderListWithSchemeBusinessParams:(id)a0 schemeProcessor:(id /* block */)a1 completion:(id /* block */)a2;
- (void)p_handlePreloadResultWithCode:(long long)a0 startTimestamp:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
