@class NSString;
@protocol IESLiveRoomService, IESLiveLoginService, IESLiveShareService;

@interface IESLiveECommercePiperHandler : NSObject <IESLivePiperHandlerProtocol>

@property (retain, nonatomic) id<IESLiveRoomService> roomService;
@property (retain, nonatomic) id<IESLiveLoginService> loginService;
@property (retain, nonatomic) id<IESLiveShareService> shareService;
@property (nonatomic) BOOL shouldLazyCreateCallHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)a0;
- (void)registerHandlerWithBridge:(id)a0;
- (id /* block */)modifiedPromotionsCallHandler;
- (id /* block */)fullParamsSharePanelCallHandler;
- (id /* block */)openQRCodeScannerCallHandler;
- (void)openFissionCouponShare:(id)a0 callback:(id /* block */)a1;
- (void)openShare:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;

@end
