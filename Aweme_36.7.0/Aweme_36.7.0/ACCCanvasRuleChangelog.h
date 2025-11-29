@class NSMutableArray;

@interface ACCCanvasRuleChangelog : ACCEditBaseChangelog

@property (retain, nonatomic) NSMutableArray *canvasStateChain;

- (void)addState:(id)a0 rule:(id)a1;
- (id)makeContent;
- (void).cxx_destruct;
- (id)init;

@end
