@class _TtC8TempoiOS10TempoLoger, NSString, _TtC8TempoiOS13TempoTemplate, TempoExpression;

@interface TempoExpressionWrapper : NSObject

@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) _TtC8TempoiOS10TempoLoger *logger;
@property (retain, nonatomic) _TtC8TempoiOS13TempoTemplate *tp;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) TempoExpression *expression;

+ (id)wrapperWithSource:(id)a0 logger:(id)a1 template:(id)a2 isPreload:(BOOL)a3;
+ (id)wrapperWithExpression:(id)a0 logger:(id)a1 template:(id)a2 isPreload:(BOOL)a3;

- (id)executeExpression:(id)a0 temporaryContext:(id)a1;
- (id)createExpression;
- (id)executeExpression:(id)a0;
- (void).cxx_destruct;
- (void)handleError:(id)a0;

@end
