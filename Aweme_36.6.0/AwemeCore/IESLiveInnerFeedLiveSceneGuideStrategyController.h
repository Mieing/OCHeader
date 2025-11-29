@class IESLiveInnerFeedContext, NSString;

@interface IESLiveInnerFeedLiveSceneGuideStrategyController : NSObject <IESLiveInnerFeedDataControlAction, IESLiveInnerFeedDisplayAction, HTSLiveAudienceActions>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedDidMountObject:(id)a0 atIndex:(long long)a1 lastIndex:(long long)a2;
- (void)innerFeedWillUnMountObject:(id)a0 atIndex:(long long)a1 unmountType:(long long)a2;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
