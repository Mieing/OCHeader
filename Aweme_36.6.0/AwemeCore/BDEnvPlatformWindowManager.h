@class BDEnvPlatformRootVC, NSString, UIGestureRecognizer;

@interface BDEnvPlatformWindowManager : NSObject <BDEnvPlatformRootVCDelegate>

@property (retain, nonatomic) UIGestureRecognizer *panGesture;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cacheWindowFrame;
@property (nonatomic) BOOL callByArena;
@property (retain, nonatomic) BDEnvPlatformRootVC *rootVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateModel:(id)a0 OriginModel:(id)a1;
- (void)updateModel:(id)a0 OriginModel:(id)a1 GeckoModel:(id)a2 OriginGeckoModel:(id)a3;
- (void)showEnvWindow;
- (void)hideEnvWindow;
- (void)showEnvWindowByArena;
- (void)didRootViewUpdateWithWidth:(double)a0;
- (void)didConfigViewAppear;
- (void)didConfigViewDisappear;
- (double)windowSafeAreaTop;
- (double)windowSafeAreaBottom;
- (void)setupWindow;
- (void).cxx_destruct;
- (void)pan:(id)a0;

@end
