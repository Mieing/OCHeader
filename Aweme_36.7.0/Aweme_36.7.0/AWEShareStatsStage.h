@interface AWEShareStatsStage : AWEShareBaseStage

@property (copy, nonatomic) id /* block */ handler;

+ (id)stageWithEvent:(id)a0 keyForItemID:(id)a1;

- (void)statsNewShare;
- (void)trackShareEvent;
- (BOOL)shouldStatsNewShare;
- (void).cxx_destruct;
- (id)initWithHandler:(id /* block */)a0;
- (void)run;

@end
