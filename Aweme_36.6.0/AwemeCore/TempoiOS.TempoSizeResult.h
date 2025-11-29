@class _TtC8TempoiOS10TempoError, _TtC8TempoiOS13TempoTemplate;

@interface TempoiOS.TempoSizeResult : NSObject

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic, retain) _TtC8TempoiOS13TempoTemplate *template;
@property (nonatomic, retain) _TtC8TempoiOS10TempoError *error;

- (id)initWithTemplate:(id)a0 size:(struct CGSize { double x0; double x1; })a1 error:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
