@class IESLiveLinkmicGridLayoutCalculator, IESLiveLinkmicCanvasLayoutGrid, NSString;

@interface IESLiveLinkmicGridLayoutManager : NSObject <IESLiveLinkmicStreamLayoutProvider, IESLiveLinkmicCanvasLayoutProvider>

@property (weak, nonatomic) IESLiveLinkmicCanvasLayoutGrid *layoutConfig;
@property (retain, nonatomic) IESLiveLinkmicGridLayoutCalculator *calculator;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } defaultContainerRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (void)buildLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListFrame;
- (void)updateLayoutConfig:(id)a0;
- (id)separatorLayoutFrames;
- (id)sessionLayoutFrames;
- (id)sessionLayoutInset;
- (BOOL)isMainSlotWithIndex:(long long)a0;
- (id)streamLayoutProvider;
- (id)streamLayoutFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })generateDefaultContainerRect;
- (void)setupCalculator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })audienceLocalMediaFrame;
- (double)audiencePlayerOriginYOffset;
- (double)audienceStreamAspectRatio;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamHostLayout;
- (struct CGSize { double x0; double x1; })sessionViewSize;
- (double)sessionsSpacing;
- (void).cxx_destruct;
- (void)reload;
- (BOOL)isAnchor;
- (struct CGSize { double x0; double x1; })placeholderSize;

@end
