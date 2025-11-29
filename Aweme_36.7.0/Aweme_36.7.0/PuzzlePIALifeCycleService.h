@class NSString;

@interface PuzzlePIALifeCycleService : NSObject <PuzzleKitViewLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)kitView:(id)a0 didCreatedWithContext:(id)a1;
- (void)kitView:(id)a0 willStartLoadWithRequest:(id)a1;
- (void)kitView:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)kitView:(id)a0 viewDidLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)kitViewWillDealloc:(id)a0;

@end
