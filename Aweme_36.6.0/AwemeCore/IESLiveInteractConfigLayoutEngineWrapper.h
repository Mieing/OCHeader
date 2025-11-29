@class IESLiveInteractConfigLayoutCalculator, NSMutableDictionary, NSString, IESLiveInteractionLayout;
@protocol IESLiveInteractConfigLayoutEngineInputProrocol, IESLiveInteractConfigLayoutCalculatorOutputProtocol;

@interface IESLiveInteractConfigLayoutEngineWrapper : NSObject <IESLiveInteractConfigLayoutEngine>

@property (retain, nonatomic) id<IESLiveInteractConfigLayoutEngineInputProrocol> engineInput;
@property (retain, nonatomic) IESLiveInteractConfigLayoutCalculator *calculator;
@property (retain, nonatomic) id<IESLiveInteractConfigLayoutCalculatorOutputProtocol> currentOutput;
@property (retain, nonatomic) NSMutableDictionary *outputCache;
@property (retain, nonatomic) IESLiveInteractionLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorContainerFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })guestListFrame;
- (id)streamLayoutFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })anchorFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })streamHostLayout;
- (struct CGSize { double x0; double x1; })sessionViewSize;
- (double)sessionsSpacing;
- (id)orientationKeyWithInterfaceOrientation:(long long)a0;
- (id)allStreamLayoutFrames;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentStreamLayout;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })placeholderRect;
- (BOOL)useLayoutEngineForUILayout:(int)a0;
- (void)calculateWithLayout:(id)a0 interfaceOrientation:(long long)a1;
- (void)calculateWithLayout:(id)a0 orientation:(long long)a1 currentInterfaceOrientation:(long long)a2;
- (BOOL)useLayoutEngineForCurrentLayout;
- (BOOL)useLayoutEngineForCurrentLayoutWithUILayout:(int)a0;
- (id)sessionLayoutFramesWithCurrentSessionsCount:(unsigned long long)a0;
- (id)guestLayoutConfigsWithCount:(unsigned long long)a0;
- (id)separatorLayoutConfigsWithCount:(unsigned long long)a0;
- (void)calculateWithLayout:(id)a0;
- (id)initWithEngineInput:(id)a0;
- (id)streamSessionFramesWithCurrentSessionsCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)cleanCache;
- (BOOL)isPreview;
- (id)currentLayout;
- (struct CGSize { double x0; double x1; })placeholderSize;

@end
