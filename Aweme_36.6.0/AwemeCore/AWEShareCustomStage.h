@class NSString;

@interface AWEShareCustomStage : AWEShareBaseStage

@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) id /* block */ runHandler;
@property (copy, nonatomic) id /* block */ preparationHandler;
@property (copy, nonatomic) id /* block */ asyncPreparationHandler;

+ (id)stageWithName:(id)a0 preparationHandler:(id /* block */)a1;
+ (id)stageWithName:(id)a0 runHandler:(id /* block */)a1;
+ (id)stageWithName:(id)a0 asyncPreparationHandler:(id /* block */)a1;

- (BOOL)prepareBeforeRun;
- (void)prepareBeforeRunWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (void)run;
- (BOOL)respondsToSelector:(SEL)a0;

@end
