@class NSString;

@interface IESLiveRedEnvelopePiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)sendRedEnvelopSuccessCallHandler;

@end
