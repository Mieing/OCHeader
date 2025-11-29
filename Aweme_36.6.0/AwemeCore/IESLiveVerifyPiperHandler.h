@class NSString;
@protocol IESLiveVerifyAdapter;

@interface IESLiveVerifyPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLiveVerifyAdapter> verify;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)withdrawVerifyCallHandler;
- (void).cxx_destruct;

@end
