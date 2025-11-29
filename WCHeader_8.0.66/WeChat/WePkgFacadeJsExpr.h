@class NSMutableString;

@interface WePkgFacadeJsExpr : NSObject

@property (retain, nonatomic) NSMutableString *jsScript;

- (id)init;
- (void)createIntermediateObjectIfNeed:(id)a0;
- (id)safeAccessSubVarExpr:(id)a0;
- (id)timeFromDomLoadingExpr;
- (void)jsVar:(id)a0 setValue:(id)a1 forKey:(id)a2;
- (void)appendString:(id)a0;
- (void).cxx_destruct;

@end
