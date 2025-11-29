@class AWERouteInfo, AWERouteTransitionInfo;

@interface AWERouteTransition : NSObject

@property (nonatomic) BOOL didTransfer;
@property (retain, nonatomic) AWERouteInfo *routeInfo;
@property (retain, nonatomic) AWERouteTransitionInfo *transitionInfo;

- (id)withCompletion:(id /* block */)a0;
- (id)fromViewController:(id)a0;
- (id)withTransitionType:(long long)a0;
- (id)withTransferCompletion:(id /* block */)a0;
- (void)addInnerCompletion;
- (void).cxx_destruct;
- (id)URLString;
- (void)dealloc;
- (BOOL)transfer;

@end
