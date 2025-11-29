@class NSString;

@interface IESGCPCGTXPCLoginViewProvider : NSObject <IESGCPCGTXLoginPageProtocol, IESGCPCGStandardizedLynxActions, IESGCPDIContextSubscriber>

@property (retain, nonatomic) NSString *cgLynxID;
@property (nonatomic) BOOL isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sendEvent:(id)a0 params:(id)a1;
- (void)setPageVisible:(BOOL)a0;
- (void)didSetGameCPDIContext;
- (void)onStandardizedLynxView:(id)a0 loadFinished:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(id /* block */)a0;
- (void)show;

@end
