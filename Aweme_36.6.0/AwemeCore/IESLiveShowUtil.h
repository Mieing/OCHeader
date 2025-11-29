@interface IESLiveShowUtil : NSObject

+ (void)container:(id)a0 sendEvent:(id)a1 params:(id)a2;
+ (id)createVSLynxContainerWithSchema:(id)a0 config:(id)a1 lifeCycleDelegate:(id)a2 anineXUpdateKey:(id)a3 puzzleContextAttachObject:(id)a4 cardBuilder:(id /* block */)a5;
+ (id)createVSLynxContainerWithSchema:(id)a0 config:(id)a1 lifeCycleDelegate:(id)a2 anineXUpdateKey:(id)a3 puzzleContextAttachObject:(id)a4;
+ (BOOL)isConformsIESHYContainerProtocol:(id)a0;
+ (double)screenWidthOfLandscapeJudgement;
+ (id)createAnineXLiveContainerWithSchema:(id)a0 lifeCycleDelegate:(id)a1 config:(id)a2 puzzleContextAttachObject:(id)a3 cardBuilder:(id /* block */)a4;
+ (id)createPuzzleContainerWithSchema:(id)a0 lifeCycleDelegate:(id)a1 config:(id)a2 puzzleContextAttachObject:(id)a3;
+ (id)createPuzzleContextWithAttachObject:(id)a0;

@end
