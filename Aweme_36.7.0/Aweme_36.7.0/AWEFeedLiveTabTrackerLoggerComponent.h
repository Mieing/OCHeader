@class NSString;

@interface AWEFeedLiveTabTrackerLoggerComponent : AWEFeedLiveTabBaseComponent <AWEFeedLiveTabTrackerLoggerService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (void)trackerWithEvent:(id)a0 params:(id)a1;
- (void)loggerEvent:(id)a0 params:(id)a1;
- (void)bindService;
- (id)currentUserID;

@end
