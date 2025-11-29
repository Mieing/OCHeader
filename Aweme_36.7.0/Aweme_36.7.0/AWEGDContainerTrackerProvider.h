@class NSString, AWEGoodsDetailPageContext;

@interface AWEGDContainerTrackerProvider : NSObject <AWEGDContainerTrackerProtocol>

@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1 btmInfo:(id)a2;
- (void)appendTrackParams:(id)a0;
- (void)appendTrackResourceFromParams;
- (void)trackAdEvent:(id)a0 params:(id)a1;
- (void)trackException:(id)a0 params:(id)a1 error:(id)a2;
- (id)getBaseTrackParams;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
