@class DolphinRerankContext, DolphinRerankService;

@interface DolphinRerankTaskContext : DolphinTaskContext

@property (retain, nonatomic) DolphinRerankContext *rerankContext;
@property (weak, nonatomic) DolphinRerankService *rerankService;
@property (copy, nonatomic) id /* block */ finishAndClearRerankTask;

- (void).cxx_destruct;

@end
