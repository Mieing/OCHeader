@class NSString, UTTracker;

@interface AlibcUTMiniAdapter : NSObject <AlibcUTAdapter>

@property (retain, nonatomic) UTTracker *tracker;
@property (retain, nonatomic) UTTracker *aplusTracker;
@property (retain, nonatomic) UTTracker *dauTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initWithAppkey:(id)a0;
- (id)getTrackerByRrackerId:(id)a0;
- (BOOL)isThird;
- (void)h5UT:(id)a0 view:(id)a1 viewController:(id)a2;
- (id)globalPropertyForKey:(id)a0 asTracker:(id)a1;
- (void)setGlobalProperty:(id)a0 forKey:(id)a1 asTracker:(id)a2;
- (void)addTradeLog:(id)a0 eventID:(id)a1 page:(id)a2 arg1:(id)a3 arg2:(id)a4 arg3:(id)a5 args:(id)a6;
- (void).cxx_destruct;
- (void)setChannel:(id)a0;

@end
