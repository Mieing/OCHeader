@class NSString, BDXViewController, LynxView;

@interface AWECommerceOnBackPressed : NSObject <BDXDisableSwipeServiceProtocol>

@property (weak, nonatomic) BDXViewController *bdxViewController;
@property (nonatomic) BOOL enableIntercept;
@property (weak, nonatomic) LynxView *rootView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)disableSwipe:(BOOL)a0 container:(id)a1;
- (void)enableSystemScreenEdgePanGesture:(BOOL)a0 container:(id)a1;
- (id)shouldBlockBackGesture:(id)a0;
- (void)startIntercept:(BOOL)a0 withLynxView:(id)a1 withViewController:(id)a2;
- (void).cxx_destruct;

@end
