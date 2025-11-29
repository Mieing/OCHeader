@class NSString, NSArray;

@interface WCJSInvoker : NSObject

@property (retain, nonatomic) NSString *javascript;
@property (retain, nonatomic) NSString *invokeObject;
@property (retain, nonatomic) NSString *invokeFunc;
@property (retain, nonatomic) NSArray *invokeArgs;
@property (readonly, nonatomic) NSString *finalJavascript;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSString *debugString;

+ (id)safeString:(id)a0;
+ (id)safeEscapeJavaScriptString:(id)a0;
+ (id)safeDictionary:(id)a0;
+ (id)safeArray:(id)a0;

- (id)initWithJavascript:(id)a0;
- (id)initWithObj:(id)a0 Func:(id)a1 Args:(id)a2;
- (id)invokeInJsContext:(id)a0;
- (void)invokeInWebview:(id)a0;
- (void)invokeNParamInWebview:(id)a0;
- (void)invoke0ParamInWebview:(id)a0;
- (void)invoke1ParamInWebview:(id)a0;
- (void)invoke2ParamInWebview:(id)a0;
- (void)invoke3ParamInWebview:(id)a0;
- (void)invoke4ParamInWebview:(id)a0;
- (void).cxx_destruct;

@end
