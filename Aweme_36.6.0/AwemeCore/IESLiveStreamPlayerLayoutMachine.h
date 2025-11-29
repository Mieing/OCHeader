@class NSArray, NSDictionary, NSString, UIView;

@interface IESLiveStreamPlayerLayoutMachine : IESLiveStreamUnifyBaseLayoutMachine <IESLiveStreamPlayerLayoutMachine>

@property (retain, nonatomic) NSDictionary *roomTrackParams;
@property (weak, nonatomic) UIView *windowView;
@property (nonatomic) double bottomOffset;
@property (nonatomic) double doubleInterationDistance;
@property (nonatomic) double currentPKStreamRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pkRatioFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pkCropSize;
@property (nonatomic) double multiLinkerDistance;
@property (nonatomic) double multiLinkerSpacing;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } multiLinkerRatioFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } multiLinkerCropFrame;
@property (copy, nonatomic) NSArray *multiLinkerGridRatioFrames;
@property (nonatomic) BOOL isNeedUpdateMultiLinkerLayoutParam;
@property (nonatomic) double mediaLinkmicDistance;
@property (nonatomic) double mediaLinkmicSpacing;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaLinkmicRatioFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mediaLinkmicCropFrame;
@property (copy, nonatomic) NSArray *mediaLinkmicGridRatioFrames;
@property (nonatomic) BOOL isNeedUpdateMediaLinkmicLayoutParam;
@property (nonatomic) BOOL isInPK;
@property (nonatomic) BOOL isInMultiLinker;
@property (nonatomic) BOOL isInBigParty;
@property (nonatomic) BOOL isInMediaLinkmic;
@property (nonatomic) BOOL isInDynamicLayout;
@property (nonatomic) BOOL isInSonicGameLayout;
@property (nonatomic) BOOL isInNewPip;
@property (readonly, nonatomic) unsigned long long currentLayout;
@property (nonatomic) double rightOffSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)streamPlayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamFrameInView:(id)a0;
- (void)liveComponentDidLoaded;
- (id)customLayouts;
- (id)supportSEILayoutTypes;
- (void)clearPreviousPlayerLayoutParams;
- (void)layoutWithSmallWindow:(id)a0;
- (void)removePreEnterViewWithLayout:(unsigned long long)a0;
- (void)layoutInitiallyWithRoom:(id)a0 containerView:(id)a1;
- (struct CGPoint { double x0; double x1; })playerOffsetWithPlayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 videoSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)unifyPlayerLayout;
- (id)layoutImpWithRoomScene:(long long)a0;
- (void)enumerateLayoutImpWithBlock:(id /* block */)a0;
- (void)p_layoutWithImpObj:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;

@end
