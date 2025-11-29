@class IESLiveInnerFeedContext, NSString;

@interface IESLiveInnerFeedBTMTrackerController : NSObject <IESLiveInnerFeedDisplayAction>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)configBTMTracker;
- (void)innerFeedDidLoad;
- (void)configBTMTrackerV2;
- (void)configBcm;
- (BOOL)btmUserV2Api;
- (void)config;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
