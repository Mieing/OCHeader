@class NSString;

@interface BTMPuzzleKitViewLifeCycleImp : NSObject <PuzzleKitViewLifeCycleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerImp;
+ (id)shared;

- (void)kitViewDidFirstScreen:(id)a0;
- (void)kitView:(id)a0 didFinishLoadWithURL:(id)a1;

@end
