@class NSString;
@protocol IESLiveECommercePanelAnimationService;

@interface IESECLivePanelAnimationServiceIESECBridger : NSObject <IESECLivePanelAnimationService>

@property (retain, nonatomic) id<IESLiveECommercePanelAnimationService> protoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bridgedInstanceWithObj:(id)a0;
+ (id)bridgedProtocol;

- (void)willShowPanelWithDuration:(double)a0 height:(double)a1 scene:(id)a2 panelHash:(long long)a3;
- (void)willDismissPanelWithDuration:(double)a0 animated:(BOOL)a1 scene:(id)a2 panelHash:(long long)a3;
- (void).cxx_destruct;

@end
