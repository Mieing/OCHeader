@class NSValue, NSMutableDictionary, UILabel;
@protocol IESLiveInteractionStreamPlayerService;

@interface IESLiveStreamPlayerLayoutBigParty : IESLiveStreamPlayerLayoutBase

@property (nonatomic) unsigned long long streamStyleFromSEI;
@property (nonatomic) unsigned long long lastStreamStyle;
@property (nonatomic) struct { long long scaleType; long long alignMode; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame; NSValue *viceViewFrame; BOOL useScaleHeightToWidth; } lastLayoutData;
@property (nonatomic) long long version;
@property (retain, nonatomic) NSMutableDictionary *version2FrameMap;
@property (weak, nonatomic) UILabel *tipLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } customFrame;
@property (weak, nonatomic) id<IESLiveInteractionStreamPlayerService> playerService;
@property (nonatomic) BOOL isInBigPartyWhileOuterServiceNotReady;

- (void)didSetAttachingDIContext;
- (BOOL)layoutWithMetaInfo:(id)a0;
- (void)showDebugInfoIfNeed;
- (double)audiencePlayerOriginYOffset;
- (double)calculateTopSpacing;
- (double)bottomYPosition;
- (double)mixWidthHeightRatio;
- (BOOL)shouldUseCurrentLayoutType;
- (void)layoutWithPreviousType:(unsigned long long)a0;
- (id)rawPlayer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preComponentPlayerFrameWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)removeDebugInfoIfNeeded;
- (BOOL)isCurrentDevicePortrait;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateNonOverlappingFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })calculateEqualFrameWithOriginFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)anchorHeightRatio;
- (double)streamAspectRatio;
- (double)audienceLocalMediaHeight;
- (double)bigPartyEqualTopRatio;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (void)commonInit;
- (void)dealloc;
- (BOOL)isLandscape;

@end
