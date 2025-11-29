@class AWEFeedFPSSceneTracker, NSString;

@interface AWEFeedPerformanceEndController : AWEBaseController <AWEFeedControllerProtocol>

@property (retain, nonatomic) AWEFeedFPSSceneTracker *fpsTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
