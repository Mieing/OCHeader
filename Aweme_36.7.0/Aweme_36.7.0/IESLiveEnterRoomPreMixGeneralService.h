@class NSMutableDictionary, NSDictionary, BDXBridgeEventSubscriber, UIView, NSString;

@interface IESLiveEnterRoomPreMixGeneralService : IESLiveGeneralBaseService <IESLiveEnterRoomPreMixGeneralService>

@property (retain, nonatomic) NSMutableDictionary *innerParams;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) NSDictionary *clickParams;
@property (nonatomic) BOOL isShowMask;
@property (retain, nonatomic) BDXBridgeEventSubscriber *leaveRoomSubscriber;
@property (nonatomic) BOOL loaded;
@property (copy, nonatomic) id /* block */ enterRoomBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_generalServiceAction;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (unsigned long long)supportType;

- (void)serviceUninstall;
- (void)showMaskView;
- (id)innerParamsKey;
- (void)addInnerParams:(id)a0 forType:(id)a1;
- (id)getInnerParamsByType:(id)a0;
- (void)removeInnerParamsByType:(id)a0;
- (id)deliverInnerParams;
- (void)setupDeliverInnerParams:(id)a0;
- (void)closeMaskViewWithClickOnBlankArea:(BOOL)a0;
- (BOOL)isShowMaskView;
- (double)componentAlpha;
- (void)enterRoomWithParams:(id)a0;
- (void)preMixWithCreateMaskIfNeed;
- (id)p_innerSchemaKey;
- (double)contentContainerAlpha;
- (void)handleClickOnBlankArea;
- (void)p_trackLiveQuit:(BOOL)a0;
- (BOOL)isCloseLiveRoom;
- (void)enterRoom:(id)a0;
- (void).cxx_destruct;
- (void)onTap:(id)a0;

@end
