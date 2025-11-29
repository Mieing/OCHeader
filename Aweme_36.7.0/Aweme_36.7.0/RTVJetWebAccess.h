@class NSString;
@protocol RTVJetConfigManagerInterface, RxInjector, RxWebServiceAccessErrorListenerProtocol, RxHTTPErrorParser;

@interface RTVJetWebAccess : NSObject <RTVJetWebAccessInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) id<RTVJetConfigManagerInterface> configManager;
@property (readonly, copy, nonatomic) NSString *businessTag;
@property (readonly, nonatomic) id<RxHTTPErrorParser> errorParser;
@property (readonly, nonatomic) id<RxWebServiceAccessErrorListenerProtocol> errorListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rxInjectorCreateWithArgs:(id)a0 injector:(id)a1;

- (void)rxAwakeFromPropertyInjection;
- (void)registerNotifyHandler:(id)a0 ofService:(int)a1;
- (void)unregisterNotifyHandler:(id)a0 ofService:(int)a1;
- (id)JSONWithURLString:(id)a0 service:(int)a1 method:(int)a2 params:(id)a3;
- (id)PBWithURLString:(id)a0 service:(int)a1 method:(int)a2 params:(id)a3;
- (id)initWithBusinesstag:(id)a0;
- (void).cxx_destruct;

@end
