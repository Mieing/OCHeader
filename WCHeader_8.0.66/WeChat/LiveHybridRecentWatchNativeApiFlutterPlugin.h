@class NSString, UIViewController;

@interface LiveHybridRecentWatchNativeApiFlutterPlugin : NSObject <MMFlutterPlugin, LiveHybridRecentWatchNativeApi>

@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToViewController:(id)a0;
- (void)onAttachedToEngine:(id)a0;
- (void)onDetachedFromEngine:(id)a0;
- (void)modLivePersonalCenterRecentWatchOptionsOpType:(long long)a0 feedIds:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
