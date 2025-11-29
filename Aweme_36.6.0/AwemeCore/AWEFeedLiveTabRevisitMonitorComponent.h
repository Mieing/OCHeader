@class NSString, NSMutableArray;

@interface AWEFeedLiveTabRevisitMonitorComponent : AWEFeedLiveTabBaseComponent <AWEFeedLiveTabRevisitMonitorService>

@property (retain, nonatomic) NSMutableArray *reportQueue;
@property (nonatomic) BOOL disableStore;
@property (nonatomic) double delay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)hasOpenRevisit:(BOOL)a0 params:(id)a1;
- (void)hasOperatedComponentBizType:(long long)a0 params:(id)a1;
- (void)bindService;
- (void).cxx_destruct;
- (id)init;

@end
