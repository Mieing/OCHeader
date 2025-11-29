@class AWEHPTabLandingModel, AWEHPTabLandingConfig;

@interface AWEHPTabLandingTask : NSObject

@property (retain, nonatomic) AWEHPTabLandingModel *model;
@property (retain, nonatomic) AWEHPTabLandingConfig *config;
@property (copy, nonatomic) id /* block */ prepareLandingBlock;
@property (copy, nonatomic) id /* block */ triggerLandingBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ exitBlock;

- (void)triggerLandingPrepare;
- (void)triggerLandingHandle:(BOOL)a0;
- (void)triggerLandingCompletion:(BOOL)a0 cause:(id)a1 params:(id)a2;
- (void)triggerLandingExit:(BOOL)a0 info:(id)a1;
- (void).cxx_destruct;

@end
