@class _TtC8TempoiOS10TempoLoger, NSString, _TtC8TempoiOS13TempoTemplate, TempoScript;

@interface TempoScriptWrapper : NSObject

@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) _TtC8TempoiOS10TempoLoger *logger;
@property (retain, nonatomic) _TtC8TempoiOS13TempoTemplate *tp;
@property (nonatomic) BOOL isPreload;
@property (retain, nonatomic) TempoScript *script;

+ (id)wrapperWithSource:(id)a0 logger:(id)a1 template:(id)a2 isPreload:(BOOL)a3;
+ (id)wrapperWithScript:(id)a0 logger:(id)a1 template:(id)a2 isPreload:(BOOL)a3;

- (id)createScript;
- (id)executeScript:(id)a0 temporaryContext:(id)a1;
- (id)executeScript:(id)a0;
- (void).cxx_destruct;
- (void)handleError:(id)a0;

@end
