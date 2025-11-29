@class NSString, NSDictionary, NSMutableDictionary;

@interface AFServiceTask : NSObject

@property (copy, nonatomic) NSString *appId;
@property (retain, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *ulink;
@property (copy, nonatomic) NSString *session;
@property (nonatomic) BOOL isUlink;
@property (nonatomic) BOOL hasReplay;
@property (copy, nonatomic) id /* block */ block;
@property (retain, nonatomic) NSMutableDictionary *extraInfo;
@property (nonatomic) BOOL forceH5;
@property (nonatomic) BOOL useLanding;

+ (id)buildTaskWithAppId:(id)a0 params:(id)a1 scheme:(id)a2 andCompletion:(id /* block */)a3;
+ (id)buildTaskWithAppId:(id)a0 params:(id)a1 scheme:(id)a2 ulink:(id)a3 andCompletion:(id /* block */)a4;
+ (id)aplinktokenFromOrder:(id)a0;

- (id)urlByQueryParams;
- (id)buildQuery;
- (void)performWithBlock:(id /* block */)a0;
- (void)callAlipayByScheme:(id)a0 withBlock:(id /* block */)a1;
- (void)callAlipayByULink:(id)a0 withBlock:(id /* block */)a1;
- (id)buildUrlScheme;
- (BOOL)performInH5;
- (void)callbackWithResult:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)init;
- (void)replay;

@end
