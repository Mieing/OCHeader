@class DSLDetail, NSString, UIView;
@protocol IESHYContainerProtocol, IESLiveLynxAirInstanceInterface, IESLiveDynamicViewDelegate, IESLiveRoomService, IESLivePerfSampler, IESLiveSliceXInstanceInterface;

@interface AWELiveDynamicView : UIView <IESLiveSliceXEventForwardDelegate, IESLiveLynxAirLifecycleProtocol, IESHYHybridViewLifecycleProtocol>

@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (weak, nonatomic) id<IESLiveDynamicViewDelegate> delegate;
@property (retain, nonatomic) id<IESLiveSliceXInstanceInterface> sliceXInstance;
@property (retain, nonatomic) id<IESLiveLynxAirInstanceInterface> airInstance;
@property (retain, nonatomic) DSLDetail *dsl;
@property (retain, nonatomic) NSString *bizIdentity;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) struct CGSize { double width; double height; } fitSize;
@property (retain, nonatomic) UIView *dynamicView;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL hasCreate;
@property (nonatomic) double startCreateTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidFirstScreen:(id)a0;
- (void)viewDidFinishLoadWithURL:(id)a0;
- (void)viewDidFirstScreen;
- (void)viewDidLoadFailedWithUrl:(id)a0 error:(id)a1;
- (void)triggerSliceXEvent:(id)a0;
- (void)registerLocalMethod:(id)a0;
- (id)customGlobalProps;
- (void)registerBridges;
- (id)initWithDsl:(id)a0 bizIdentity:(id)a1 customData:(id)a2 fitSize:(struct CGSize { double x0; double x1; })a3 delegate:(id)a4 diContext:(id)a5;
- (void)reloadWithDsl:(id)a0 customData:(id)a1 fitSize:(struct CGSize { double x0; double x1; })a2;
- (void)openDynamicSchemeWithEvent:(id)a0;
- (void)createInstances;
- (void)setupWithCustomData:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1;
- (void)createSliceXViewWithDsl:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1;
- (void)createLynxAirViewWithDsl:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1;
- (void)trackDynamicViewCreateWithParams:(id)a0;
- (void)p_openSchemeWithEvent:(id)a0;
- (void)p_cardDataUpdateWithEvent:(id)a0;
- (void)p_sendTrackLogWithEvent:(id)a0;
- (void)p_showToastWithEvent:(id)a0;
- (void)p_reportLogWithEvent:(id)a0;
- (id)uniqueIDForSliceXCard;
- (void)createHybridViewWithDsl:(id)a0 fitSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;
- (id)businessIdentifier;

@end
