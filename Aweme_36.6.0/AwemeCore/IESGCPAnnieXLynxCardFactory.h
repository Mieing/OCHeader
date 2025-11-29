@interface IESGCPAnnieXLynxCardFactory : NSObject

+ (void)reportWarmupResult:(BOOL)a0 failReason:(id)a1;

- (id)createViewWithConfiguration:(id)a0 puzzleContext:(id)a1 lifeCycleDelegate:(id)a2 bid:(id)a3;
- (void)warmupAnnieXWithSchema:(id)a0;
- (void)asyncLoadViewWithCardModel:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
