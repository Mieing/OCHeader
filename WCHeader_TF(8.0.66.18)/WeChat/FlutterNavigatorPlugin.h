@class NSObject, NSString, MMFlutterEngineGroup, MMFlutterViewController, FlutterNavigatorCallback, NSMutableArray;
@protocol FlutterNavigatorDelegate;

@interface FlutterNavigatorPlugin : NSObject <FlutterNavigatorHost, MMFlutterPlugin>

@property (weak, nonatomic) MMFlutterViewController *viewController;
@property (retain, nonatomic) FlutterNavigatorCallback *callback;
@property (retain, nonatomic) MMFlutterEngineGroup *engineGroup;
@property (retain, nonatomic) NSMutableArray *enginePlugins;
@property (weak, nonatomic) NSObject<FlutterNavigatorDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onAttachedToEngine:(id)a0;
- (void)onAttachedToViewController:(id)a0;
- (void)onDetachedToViewController;
- (void)setAttachedEngineGroup:(id)a0;
- (void)setAttachedFlutterPlugins:(id)a0;
- (void)pushPlugin:(id)a0 route:(id)a1 arguments:(id)a2 completion:(id /* block */)a3;
- (void)popPlugin:(id)a0 route:(id)a1 error:(id *)a2;
- (void)enableSwipeBackWithError:(id *)a0;
- (void)disableSwipeBackWithError:(id *)a0;
- (void)onNewRouteRoute:(id)a0;
- (void).cxx_destruct;

@end
