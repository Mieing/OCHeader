@class IESLiveInnerFeedContext, NSString;
@protocol IESLivePadService;

@interface IESLiveInnerFeedPadController : NSObject <IESLiveInnerFeedDisplayAction>

@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) id<IESLivePadService> padService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedWillAppear;
- (void)innerFeedDidAppear;
- (void)innerFeedWillDisappear;
- (void)innerFeedDidDisappear;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
