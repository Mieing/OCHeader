@class NSString;

@interface IESLiveInnerFeedLiveDistributeController : NSObject <IESLiveInnerFeedDisplayAction>

@property (nonatomic) BOOL userHasSlipeDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)p_reset;
- (void)innerFeedDidEndDisplayObject:(id)a0 atIndex:(long long)a1;

@end
