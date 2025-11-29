@class UIView, ACCPIPInteractionConfig, NSMutableArray;
@protocol NPPreprocessCustomInfoDelegateProtocol_OC, NPPreprocessTTSDelegateProtocol_OC, ACCPicTemplateTrackServiceProtocol, IESServiceProvider;

@interface ACCPIPInteractionView : UIView

@property (retain, nonatomic) ACCPIPInteractionConfig *config;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } preMVPPosition;
@property (nonatomic) double preMVPScale;
@property (nonatomic) double preMVPRotation;
@property (nonatomic) struct CGSize { double width; double height; } visibleSize;
@property (retain, nonatomic) NSMutableArray *btnLocationPoints;
@property (retain, nonatomic) UIView *replaceView;
@property (retain, nonatomic) id<ACCPicTemplateTrackServiceProtocol> tracker;
@property (nonatomic) long long lastNumberOfTouches;
@property (nonatomic) struct CGPoint { double x; double y; } panAnchorOffset;
@property (nonatomic) struct CGPoint { double x; double y; } lastPanPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (nonatomic) long long gestureActiveState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } resourceFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } tmpResourceFrame;
@property (nonatomic) long long maneticType;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<NPPreprocessCustomInfoDelegateProtocol_OC> customInfoDelegate;
@property (weak, nonatomic) id<NPPreprocessTTSDelegateProtocol_OC> ttsDelegate;

- (void)replaceImage;
- (void)panActionWithGesture:(id)a0;
- (void)pinchActionWithGesture:(id)a0;
- (void)rotationActionWithGesture:(id)a0;
- (void)renderWithConfig:(id)a0;
- (void)updateResourceFrame;
- (void)passEffectIfNeededWithGestureBegin:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })magneticEdgeIfNeededWithOffSet:(struct CGPoint { double x0; double x1; })a0;
- (void)updatePreMVP;
- (void)trackForPhotoZoom;
- (void)replaceTemplateImagesCacheIfNeededWithTemplate:(id)a0 publishViewModel:(id)a1 targetModel:(id)a2 slotInfo:(id)a3 outputInfo:(id)a4;
- (void)updateAssetIdentifier:(id)a0 publishViewModel:(id)a1;
- (void)updateMultiSlotInfoWithePreProcess:(id)a0 targetModel:(id)a1 slotInfo:(id)a2 preprocessCompletion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
