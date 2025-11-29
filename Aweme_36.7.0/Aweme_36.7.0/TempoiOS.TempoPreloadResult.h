@class _TtC8TempoiOS14TempoProtoTree, _TtC8TempoiOS10TempoError, _TtC8TempoiOS13TempoTemplate;

@interface TempoiOS.TempoPreloadResult : NSObject

@property (nonatomic, retain) _TtC8TempoiOS13TempoTemplate *template;
@property (nonatomic, retain) _TtC8TempoiOS14TempoProtoTree *protoTree;
@property (nonatomic, retain) _TtC8TempoiOS10TempoError *error;

- (id)initWithTemplate:(id)a0 protoTree:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
