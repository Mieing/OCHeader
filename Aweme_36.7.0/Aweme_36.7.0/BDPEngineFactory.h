@interface BDPEngineFactory : NSObject

+ (id)sharedInstance;

- (BOOL)preloadEngineWithRuntime:(id)a0;
- (void)removePreloadedEngine:(id)a0;
- (id)createEngineWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 runtime:(id)a1 uniqueID:(id)a2;

@end
