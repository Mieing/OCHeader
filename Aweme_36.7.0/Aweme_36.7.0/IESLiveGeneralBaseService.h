@class HTSEventContext, IESLiveGuideModel, NSString, IESLiveComponentContext;
@protocol IESLiveRoomService;

@interface IESLiveGeneralBaseService : NSObject <IESLiveGeneralServiceProtocol>

@property (nonatomic) BOOL isNotRegenerate;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (nonatomic) BOOL isFromGuidePage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)serviceShouldActive:(id)a0;
+ (id)serviceProtocolsWithParam:(id)a0;
+ (id)serviceActionsWithParam:(id)a0;
+ (unsigned long long)serviceImmediateLoadTypes;

- (void)invokeRefreshAfterPreloadTask:(id /* block */)a0;
- (void)serviceDidLaunch;
- (BOOL)serviceNeedBringInAnchorRoom;
- (void)serviceDidReBind;
- (void)serviceUninstall;
- (void)serviceWillLaunchWithParam:(id)a0;
- (void)serviceRoomDataReady:(id)a0;
- (void)invokeBeginAppearAfterPreloadTask:(id /* block */)a0;
- (void).cxx_destruct;

@end
