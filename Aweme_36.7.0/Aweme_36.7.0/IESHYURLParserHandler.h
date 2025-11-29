@class IESLivePuzzleHybridRouter;

@interface IESHYURLParserHandler : NSObject

@property (retain, nonatomic) IESLivePuzzleHybridRouter *puzzleRouter;

- (id)getComponentsWithURLString:(id)a0;
- (id)buildCommonParamsWithOrigin:(id)a0;
- (id)parserWithParams:(id)a0 fromInside:(BOOL)a1 customGlobalProps:(id)a2;
- (id)parserWithParams:(id)a0 fromInside:(BOOL)a1 customGlobalProps:(id)a2 context:(id)a3;
- (id)handleURLQuerys:(id)a0 params:(id)a1;
- (id)getQueryItemsWithURLString:(id)a0;
- (void)addHybridMonitorDataToParams:(id)a0 withPrepareInitDataStartTime:(double)a1 prepareInitDataEndTime:(double)a2;
- (id)parserWithParams:(id)a0 fromInside:(BOOL)a1;
- (void).cxx_destruct;

@end
