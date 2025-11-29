@class NSString, NSMutableDictionary;

@interface BDUGLuckyDogSchemaManager : NSObject <BDUGLuckyDogSchemaProtocol>

@property (retain, nonatomic) NSMutableDictionary *actionHandlersWithSchema;
@property (copy, nonatomic) id /* block */ hostSchemaHandler;
@property (copy, nonatomic) id /* block */ hostSchemaHandlerWithExtraParams;
@property (copy, nonatomic) NSString *latestOpenFaildReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerAction:(id)a0 withSchemeHandler:(id /* block */)a1;
+ (id)SDKHost;
+ (void)registerHostSchemaHandler:(id /* block */)a0;
+ (void)registerHostSchemaHandlerWithExtraParams:(id /* block */)a0;
+ (id)createURLWithScheme:(id)a0 action:(id)a1 params:(id)a2;
+ (id)stringByAddingPercentEscapes:(id)a0;
+ (id)createURLWithAction:(id)a0 params:(id)a1;
+ (void)unregisterAction:(id)a0;
+ (BOOL)handleAction:(id)a0 withParams:(id)a1;
+ (id)getURLParamsWithURL:(id)a0;
+ (id)sharedInstance;
+ (id)serviceProtocol;

- (void)dispatchUrl:(id)a0;
- (BOOL)openURL:(id)a0 failReason:(id *)a1;
- (BOOL)openHostURL:(id)a0 withExtraParams:(id)a1;
- (BOOL)isLocalAppWithUrl:(id)a0;
- (id)replaceString:(id)a0 withScheme:(id)a1;
- (void)dispatchUrl:(id)a0 withExtraParams:(id)a1;
- (BOOL)openHostURL:(id)a0;
- (BOOL)canOpenURL:(id)a0;
- (void).cxx_destruct;
- (BOOL)openURL:(id)a0;
- (id)init;

@end
