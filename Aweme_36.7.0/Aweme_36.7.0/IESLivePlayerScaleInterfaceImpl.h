@class NSString;
@protocol IESLiveFIFAPlayerScaleRouter;

@interface IESLivePlayerScaleInterfaceImpl : IESLiveGeneralBaseService <IESLiveFIFAPlayerScaleRouter>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentPlayerLayout;
@property (weak, nonatomic) id<IESLiveFIFAPlayerScaleRouter> router;
@property (nonatomic) long long currentPanelWidthType;
@property (nonatomic) long long currentPanelStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (BOOL)isInLinkmicScene;
- (BOOL)enablePlayerScale;
- (long long)fifaPanelCurrentStatus;
- (long long)fifaOpenedType;
- (double)fifaOpenedWidth;
- (void)fifaOpenRightPanel:(long long)a0 contentView:(id)a1 openCompletion:(id /* block */)a2 closeCompletion:(id /* block */)a3;
- (void)fifaOpenRightPanel:(long long)a0 contentView:(id)a1 config:(id)a2 openCompletion:(id /* block */)a3 closeCompletion:(id /* block */)a4;
- (void)fifaCloseRightPanel:(id /* block */)a0;
- (void)saveCurrentPlayerLayoutData:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentPlayerLayoutData;
- (void)injectRouter:(id)a0;
- (void).cxx_destruct;
- (id)currentConfig;

@end
