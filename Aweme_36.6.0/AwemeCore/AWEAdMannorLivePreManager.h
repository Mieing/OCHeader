@class NSTimer, AWEAwemeModel, NSString, NSMutableDictionary, BDMannorManager, NSDictionary, NSMutableSet, NSObject;
@protocol BDMannorAdComponentProtocol;

@interface AWEAdMannorLivePreManager : NSObject <BDMannorAdComponentDelegate, AWELiveRoomMessage, AWECommerceLeaveConvertPageMessage, AWEAdMannorLivePreManager>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSMutableSet *readyComponentTypes;
@property (retain, nonatomic) NSMutableDictionary *cardHeights;
@property (retain, nonatomic) NSObject<BDMannorAdComponentProtocol> *mannorComponent;
@property (retain, nonatomic) BDMannorManager *mannorManager;
@property (copy, nonatomic) NSDictionary *containerDict;
@property (nonatomic) double startTime;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) long long cumulativeDuration;
@property (retain, nonatomic) NSMutableDictionary *componentDict;
@property (retain, nonatomic) NSMutableDictionary *componentShowBlockDict;
@property (retain, nonatomic) NSMutableDictionary *componentHideBlockDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ showLivePreviewInfoBlock;
@property (copy, nonatomic) id /* block */ showLargeStyleAdCardBlock;
@property (copy, nonatomic) id /* block */ showSmallStyleAdCardBlock;
@property (copy, nonatomic) id /* block */ hideSmallStyleAdCardBlock;
@property (copy, nonatomic) id /* block */ hideLivePreviewInfoBlock;
@property (copy, nonatomic) id /* block */ enterLiveRoomBlock;

+ (BOOL)shouldUseMannorRenderInLivePreviewWithAwemeModel:(id)a0;
+ (BOOL)shouldShowBottomCardInLivePreviewWithAwemeModel:(id)a0;

- (void)sendEvent:(id)a0 params:(id)a1 callback:(id /* block */)a2;
- (void)onLeaveConvertPage:(id)a0;
- (void)audienceQuitAllRoom;
- (id)lynxBridges;
- (void)p_setupMannorCard;
- (id)p_mannorContext;
- (void)mannorComponentDidStartLoad:(id)a0 componentType:(id)a1;
- (void)mannorComponentDidFinishLoad:(id)a0 componentType:(id)a1;
- (void)mannorComponentDowngrade:(id)a0 errorMessage:(id)a1 componentType:(id)a2;
- (void)mannorComponentClose:(id)a0 componentType:(id)a1;
- (void)p_resetMannorAwemeModelContext;
- (BOOL)p_setupMannorAwemeModelContext;
- (id)p_mannorJSBInjectHandlerMethodMap;
- (id)p_componentSpecificJSBridgesWithComponentType:(id)a0;
- (void)p_setupComponentRelation;
- (id)p_layoutModelForComponentType:(id)a0;
- (void)startShowComponent:(id)a0 height:(double)a1;
- (void)startHideComponent:(id)a0;
- (void)p_trackCreativeComponentCloseClickEvent:(id)a0;
- (void)trackOtherShowFailed:(id)a0;
- (void)trackOtherShow:(id)a0;
- (id)p_adExtraDictWithComponentType:(id)a0;
- (id)p_userEventParams;
- (void)setupMannorCardWithContainerDict:(id)a0 awemeModel:(id)a1;
- (void)livePreviewPause;
- (void)livePreviewResume;
- (BOOL)needHigherEnterRoomButton:(id)a0;
- (void).cxx_destruct;
- (void)startTimer;
- (void)updateTimer;
- (void)reset;

@end
