@class NSString, PIABiMapTable;

@interface PIAMessageActionFrontendService : NSObject <PIAMessageActionFrontendService>

@property (retain, nonatomic) PIABiMapTable *engineCallBackMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)executePrepareServiceTask;

- (id)initService;
- (void)callbackFrontendAPI:(id)a0 engine:(id)a1 href:(id)a2;
- (void)invokeFrontendAPI:(id)a0 version:(unsigned long long)a1 params:(id)a2 engine:(id)a3 href:(id)a4 callBack:(id /* block */)a5;
- (void)postEvent:(id)a0 version:(unsigned long long)a1 params:(id)a2 engine:(id)a3 href:(id)a4;
- (void)invocationFrontend:(id)a0 ID:(long long)a1 version:(unsigned long long)a2 params:(id)a3 engine:(id)a4 href:(id)a5 callBack:(id /* block */)a6;
- (void).cxx_destruct;

@end
