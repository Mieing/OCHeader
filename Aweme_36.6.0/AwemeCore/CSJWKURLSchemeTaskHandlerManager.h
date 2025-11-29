@class NSMutableDictionary;

@interface CSJWKURLSchemeTaskHandlerManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *handlerDic;
@property (nonatomic) long long count;

+ (void)webView:(id)a0 startURLSchemeTask:(id)a1;
+ (id)sharedInstance;
+ (void)webView:(id)a0 stopURLSchemeTask:(id)a1;

- (id)p_handlerKey:(id)a0 task:(id)a1;
- (void).cxx_destruct;
- (void)webView:(id)a0 startURLSchemeTask:(id)a1;
- (id)init;
- (void)webView:(id)a0 stopURLSchemeTask:(id)a1;

@end
