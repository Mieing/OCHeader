@class _TtC8TempoiOS11TempoEngine, NSArray, NSDictionary, LLDitoTempoExtension;

@interface LLDitoTempoTask : NSObject

@property (weak, nonatomic) _TtC8TempoiOS11TempoEngine *engine;
@property (weak, nonatomic) LLDitoTempoExtension *tempoExtension;
@property (copy, nonatomic) id /* block */ complete;
@property (readonly, nonatomic) NSArray *viewModelList;
@property (copy, nonatomic) NSDictionary *viewModelMap;
@property (nonatomic) BOOL needReloadPage;

- (id)initWithEngine:(id)a0 tempoExtension:(id)a1;
- (void)startLoadTempoComponent:(id)a0 complete:(id /* block */)a1;
- (void)invokeComplete;
- (void)didPreloadTemplateWithSuccessResult:(id)a0 failureResult:(id)a1;
- (void)fetchSize:(id)a0;
- (void).cxx_destruct;

@end
