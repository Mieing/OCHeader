@class NSString;

@interface IESLiveCommercialComponentPiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)commercialComponentOperationCallHandler;
- (id /* block */)commercialLotteryResultInfoCallHandler;
- (id /* block */)getMaterialPathCallHandler;
- (id /* block */)monitorCommerceLotteryNumMsgCallHandler;
- (id /* block */)getCommerceLotteryEventParamsCallHandler;
- (id /* block */)sendCloseLynxMsgCallHandler;

@end
