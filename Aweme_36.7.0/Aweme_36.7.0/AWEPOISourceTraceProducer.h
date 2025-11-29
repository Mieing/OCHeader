@class UIResponder, NSDictionary, NSMutableDictionary;

@interface AWEPOISourceTraceProducer : NSObject

@property (weak, nonatomic) UIResponder *host;
@property (copy, nonatomic) NSDictionary *traceData;
@property (copy, nonatomic) id /* block */ traceProducer;
@property (retain, nonatomic) NSMutableDictionary *updatePageData;
@property (retain, nonatomic) NSMutableDictionary *updateUnitData;

- (id)initWithHost:(id)a0 traceProducer:(id /* block */)a1;
- (void)updatePageData:(id)a0;
- (void)updateUnitData:(id)a0;
- (void)updateTraceData:(id)a0;
- (void)clearUnitData;
- (void)updateTraceProducer:(id /* block */)a0;
- (void).cxx_destruct;

@end
