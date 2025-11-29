@class NSString;

@interface BDTNetworkManager : NSObject <BDTNetworkManagerImp>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)asyncRequestForURL:(id)a0 method:(id)a1 queryParameters:(id)a2 postParameters:(id)a3 callback:(id /* block */)a4 callbackQueue:(id)a5 encrypt:(BOOL)a6 tagType:(unsigned long long)a7;
+ (void)tvRequestForJSONWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 callback:(id /* block */)a5 tagType:(unsigned long long)a6;
+ (void)uploadEvent:(id)a0 param:(id)a1;
+ (id)networkType;
+ (id)sharedInstance;

- (void)asyncRequestForURL:(id)a0 method:(id)a1 queryParameters:(id)a2 postParameters:(id)a3 callback:(id /* block */)a4 callbackQueue:(id)a5 encrypt:(BOOL)a6 tagType:(unsigned long long)a7;
- (void)asyncRequestForURL:(id)a0 method:(id)a1 queryParameters:(id)a2 postParameters:(id)a3 callback:(id /* block */)a4 callbackQueue:(id)a5 encrypt:(BOOL)a6 tagType:(unsigned long long)a7;
- (id)createTaggedHeaderFieldWith:(id)a0 type:(unsigned long long)a1;
- (id)createTaggedHeaderFieldWith:(id)a0 type:(unsigned long long)a1;
- (void)tvRequestForJSONWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 callback:(id /* block */)a5 tagType:(unsigned long long)a6;
- (void)tvRequestForJSONWithResponse:(id)a0 params:(id)a1 method:(id)a2 needCommonParams:(BOOL)a3 headerField:(id)a4 callback:(id /* block */)a5 tagType:(unsigned long long)a6;
- (void)uploadEvent:(id)a0 param:(id)a1;
- (void)uploadEvent:(id)a0 param:(id)a1;
- (id)networkType;
- (id)networkType;
- (id)init;
- (void)setup;
- (void)setup;

@end
