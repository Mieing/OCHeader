@class NSString, NSMutableDictionary, UIView, NSMutableArray;

@interface IESLiveAioLinkLynxServiceHandler : IESLiveAioLinkBaseServiceHandler

@property (copy, nonatomic) NSString *protocolName;
@property (weak, nonatomic) UIView *view;
@property (retain, nonatomic) NSMutableArray *unexecutedMethodsList;
@property (nonatomic) long long expirationTime;
@property (nonatomic) BOOL useNewEventType;
@property (copy, nonatomic) NSString *dynamicVersion;
@property (retain, nonatomic) NSMutableDictionary *lynxToLynxTagMap;

- (id)dynamicServiceVersion;
- (void)process:(id)a0 params:(id)a1 error:(id)a2 tag:(id)a3 returnContentType:(unsigned long long)a4;
- (void)removeInvokeWith:(id)a0 reason:(unsigned long long)a1;
- (void)updateLynxHandleWithView:(id)a0;
- (void)setDynamicServiceVersion:(id)a0;
- (id)initWithService:(id)a0 protocolName:(id)a1 view:(id)a2 useNewEvent:(BOOL)a3;
- (void)removeInValidMethods;
- (BOOL)shouldCallLynx;
- (void)addSignatureForConfig;
- (void)handleReturnValue:(id)a0 error:(id)a1 tag:(id)a2 completion:(id /* block */)a3;
- (BOOL)disableLynxToLynx:(id)a0;
- (void)aioLinkHandlerUnrecognizedSeletor:(SEL)a0;
- (id)methodSelWithProtocol:(id)a0;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithService:(id)a0;
- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;

@end
