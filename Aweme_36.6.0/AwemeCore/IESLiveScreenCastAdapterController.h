@class IESLiveInnerFeedContext, NSString;

@interface IESLiveScreenCastAdapterController : NSObject <IESLiveInnerFeedDisplayAction>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedDidAppear;
- (void)innerFeedDidDisappear;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
