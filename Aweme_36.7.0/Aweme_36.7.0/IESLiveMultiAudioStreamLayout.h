@class NSNumber, HTSInteractionStreamAppData, NSString;
@protocol IESLiveInteractiveSpatialAudioService, IESLiveKTVCommonOuterService, IESLiveInteractionLayoutRouter, IESLiveInteractionModule, IESLiveInteractGameAvatarRouter, IESLiveInteractionLinkerService;

@interface IESLiveMultiAudioStreamLayout : NSObject <IESLiveInteractiveStreamLayout>

@property (retain, nonatomic) NSNumber *orderSingPushReact;
@property (weak, nonatomic) id<IESLiveInteractiveSpatialAudioService> spatialAudioService;
@property (weak, nonatomic) id<IESLiveInteractionModule> interactionModule;
@property (weak, nonatomic) id<IESLiveInteractionLinkerService> linkerService;
@property (weak, nonatomic) id<IESLiveKTVCommonOuterService> ktvCommonOuterService;
@property (weak, nonatomic) id<IESLiveInteractionLayoutRouter> layoutRouter;
@property (weak, nonatomic) id<IESLiveInteractGameAvatarRouter> gameAvatarRouter;
@property (nonatomic) struct CGSize { double width; double height; } canvasSize;
@property (retain, nonatomic) HTSInteractionStreamAppData *appData;
@property (nonatomic) unsigned long long subscene;
@property (nonatomic) BOOL seiFieldsSimplified;
@property (nonatomic) BOOL seiFieldsSimplifiedUid;
@property (nonatomic) BOOL anchorSessionNeedFull;
@property (nonatomic) BOOL shouldPushEnlargeVideo;
@property (nonatomic) BOOL customizeStreamingSessionNeedFull;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCanvasSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayoutOfPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (void)updateLayoutOfExtraPublisher:(id)a0 withSessions:(id)a1 withUserService:(id)a2 mediaConfig:(id)a3;
- (id)appDataWithUserService:(id)a0;
- (long long)viewIndexWithUser:(id)a0;
- (id)seiRegionFrom:(id)a0 session:(id)a1 userService:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enlargeVideoRegion;
- (void).cxx_destruct;

@end
