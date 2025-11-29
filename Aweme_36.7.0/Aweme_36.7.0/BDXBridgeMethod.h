@class NSString, BDXBridgeContext;
@protocol BDARVideoLynxBridgeContext, IESServiceProvider;

@interface BDXBridgeMethod : NSObject

@property (nonatomic) BOOL isLocal;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<BDARVideoLynxBridgeContext> BDARContext;
@property (readonly, nonatomic) unsigned long long engineTypes;
@property (readonly, copy, nonatomic) NSString *methodName;
@property (readonly, nonatomic) long long authType;
@property (readonly, nonatomic) BOOL isDevelopmentMethod;
@property (retain, nonatomic) BDXBridgeContext *context;
@property (readonly, nonatomic) Class paramModelClass;
@property (readonly, nonatomic) Class resultModelClass;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithCallHandler:(id /* block */)a0;
- (id)bpea_pageContext:(id)a0;
- (id)bpea_apiContext:(id)a0;
- (void)secure_networkJSB:(id)a0 rewriteCallback:(id /* block */)a1;
- (void)raiseExceptionWithSelector:(SEL)a0;
- (id)mallListSharedDataIMP;
- (id)mallDynamicRequestIMP;
- (id)lk_currentLynxCardContextDelegate;
- (id)mall_bridgeCallHanderServiceImpl;
- (id)initWithNoCallHandler;
- (BOOL)lk_contextDelegateSetted;
- (id)lk_currentListContextId;
- (id)lk_shareDataImp;
- (id)lk_dynamicRequestImp;
- (void)lk_currentLynxCardWriteAlogMethodName:(id)a0 paramModel:(id)a1 result:(id)a2 context:(id)a3;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
