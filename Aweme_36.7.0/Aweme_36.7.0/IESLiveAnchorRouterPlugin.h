@protocol HTSLiveDetailRouter;

@interface IESLiveAnchorRouterPlugin : IESLiveAnchorBizPlugin

@property (retain, nonatomic) id<HTSLiveDetailRouter> router;

- (void).cxx_destruct;
- (void)setup;

@end
