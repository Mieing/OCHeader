@class IESLivePPOMonitorHandler, NSArray, NSString, NSMutableArray, IESLivePPOBusinessHideHandler;

@interface IESLivePopupPerfOptimizeService : IESLiveGeneralBaseService <IESLivePopupPerfOptimizeService>

@property (retain, nonatomic) NSMutableArray *panelArray;
@property (retain, nonatomic) IESLivePPOMonitorHandler *monitorHandler;
@property (retain, nonatomic) IESLivePPOBusinessHideHandler *hideHanler;
@property (retain, nonatomic) NSArray *blockPanelArr;
@property (nonatomic) BOOL disableMutilFilter;
@property (nonatomic) BOOL disableLand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;

- (void)serviceDidLaunch;
- (void)popupPanelWillShowWithType:(id)a0;
- (void)popupPanelDidShowWithType:(id)a0 panel:(id)a1 panelHeight:(double)a2;
- (void)popupPanelWillCloseWithType:(id)a0;
- (void)popupPanelCloseWithType:(id)a0;
- (BOOL)blockPanel:(id)a0;
- (BOOL)containPanel:(id)a0;
- (void).cxx_destruct;
- (void)forceReset;

@end
