@class NSString;

@interface PuzzleLynxMonitorPlugin : NSObject <PuzzleKitViewLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadSwizzled;
+ (id)sharedMonitor;

- (void)kitView:(id)a0 willCreatedWithContext:(id)a1;
- (void)kitView:(id)a0 didCreatedWithContext:(id)a1;
- (void)startLynxMonitor;

@end
