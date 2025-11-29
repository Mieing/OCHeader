@class NSString, IESLiveRevenueInteractStreamFrameMonitor, IESLiveLinkMicSEIParserResult;
@protocol IESLiveRevenueInteractStreamService, IESLivePKService;

@interface IESLiveStreamPlayerLayoutDoubleInteraction : IESLiveStreamPlayerLayoutBase <IESLiveAutoRotateAction, IESLiveSEIListener, IESLiveStreamPlayerLayoutDoubleInteractionProvider>

@property (retain, nonatomic) id<IESLivePKService> pkService;
@property (retain, nonatomic) id<IESLiveRevenueInteractStreamService> streamService;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRatioFrame;
@property (nonatomic) BOOL enableSwitchJudgeOpt;
@property (nonatomic) BOOL hasGuest;
@property (nonatomic) BOOL inGame;
@property (nonatomic) BOOL hasAudioAnchor;
@property (copy, nonatomic) NSString *cloudCollaborateLayoutKey;
@property (nonatomic) long long gameFull;
@property (nonatomic) long long uiLayout;
@property (nonatomic) double currentPKStreamRatio;
@property (copy, nonatomic) NSString *pkBackgroundColor;
@property (retain, nonatomic) IESLiveLinkMicSEIParserResult *lastLinkmicSEI;
@property (retain, nonatomic) IESLiveRevenueInteractStreamFrameMonitor *streamFrameMonitor;
@property (nonatomic) double doubleInterationDistance;
@property (nonatomic) BOOL isInPK;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pkRatioFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pkCropSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id linkerLayoutProvider;

- (void)didSetAttachingDIContext;
- (void)animationForAutoRotateToOrientation:(long long)a0 duration:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (unsigned long long)seiDispatchPriority;
- (unsigned long long)typeToCheckIfLaterThanWhenReuseSEI;
- (BOOL)shouldReceiveImmidiatelySEI;
- (BOOL)enableDynamicLayout;
- (struct CGSize { double x0; double x1; })playerSize;
- (BOOL)layoutWithMetaInfo:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })losePrecisionRectWith:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)checkPKPlayerPropState;
- (double)caculateStreamRatioHeightWithRatio:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ratioFrameForIpadWithHeight:(double)a0 width:(double)a1 shortTouchHeight:(double)a2 isLandscape:(BOOL)a3;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (BOOL)isPreStreamPlayer;
- (BOOL)unifyPlayerLayout;
- (BOOL)isValidPKReact:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updatePKRatioFrameForIPad:(BOOL)a0 toSize:(struct CGSize { double x0; double x1; })a1;
- (void)resetPKPlayerParam;
- (long long)checkedRoomScene:(long long)a0 withSource:(id)a1;
- (void)updatePlayerBackgroundColor:(BOOL)a0;
- (void)handleDoubleInterationLayoutWithLinkSEI:(id)a0 source:(id)a1 pkRatioFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 distance:(id)a3 background:(id)a4;
- (BOOL)useLayoutMachine;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (unsigned long long)currentLayout;
- (id)mediaContainer;

@end
