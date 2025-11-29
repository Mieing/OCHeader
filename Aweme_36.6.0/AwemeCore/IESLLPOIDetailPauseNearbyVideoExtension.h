@class NSString;

@interface IESLLPOIDetailPauseNearbyVideoExtension : IESLLPOIBaseExtension

@property (retain, nonatomic) NSString *sessionId;

- (void)configWithRouterParamDict:(id)a0;
- (void)setupNearbyVideoPause:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillDisappear;

@end
