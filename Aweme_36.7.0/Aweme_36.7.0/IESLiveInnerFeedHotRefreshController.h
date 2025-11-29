@class NSArray, NSTimer, NSString, IESLiveInnerFeedDataSourceHotRefreshInjection, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedHotRefreshController : NSObject <IESLiveInnerFeedDisplayAction, IESLiveInnerFeedHotRefreshService>

@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) double beginWatchTime;
@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) IESLiveInnerFeedDataSourceHotRefreshInjection *hotRefreshInjection;
@property (nonatomic) long long refreshType;
@property (copy, nonatomic) NSArray *requestItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)applicationEnterBackground;
- (void)applicationEnterForeground;
- (void)innerFeedWillAppear;
- (void)innerFeedWillDisappear;
- (void)innerFeedWillDisplayObject:(id)a0 atIndex:(long long)a1;
- (BOOL)enableInnerFeedRefresh;
- (id)hotRefreshProcessDataWithResponseItems:(id)a0;
- (BOOL)p_supportHotRefresh:(id)a0;
- (void)p_hotRefreshUpdate;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)addObserver;

@end
