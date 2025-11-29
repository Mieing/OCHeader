@class IESLiveRightBottomMutuallyExclusiveItem, IESLiveAnchorPictureAirPlayCameraView, NSString, IESLiveLayoutPlaceholderView, IESLiveAnchorPictureAirPlayPreView;
@protocol IESLiveVideoEffectProcessing;

@interface IESLiveAnchorPictureAirPlayFragment : IESLiveRoomComponent <IESLiveAnchorPictureAirPlayObserver, IESLiveAnchorRoomStatusChangeEvents, HTSLiveMessageSubscriber>

@property (retain, nonatomic) id<IESLiveVideoEffectProcessing> videoEffectProcessing;
@property (retain, nonatomic) IESLiveAnchorPictureAirPlayPreView *pictureAirPlayPreview;
@property (retain, nonatomic) IESLiveAnchorPictureAirPlayCameraView *pictureAirPlayCameraView;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *rightBottomItem;
@property (retain, nonatomic) IESLiveLayoutPlaceholderView *rightBottomPlaceholderView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fullScreenNdcRect;
@property (nonatomic) struct CGSize { double width; double height; } cameraSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraInitialRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dragCenterRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dragRightBottomRect;
@property (nonatomic) struct CGSize { double width; double height; } rightBottomContentSize;
@property (nonatomic) double horizontalDragMargin;
@property (nonatomic) struct CGSize { double width; double height; } originOutputSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pictureAirPlayCameraNdcRect;
@property (nonatomic) BOOL requestingPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (void)showToastWithText:(id)a0;
- (void)startAnchorLiveWithRoom:(id)a0;
- (void)pauseAnchorLiveWithType:(unsigned long long)a0;
- (void)resumeAnchorLiveWithType:(long long)a0;
- (void)updatePublicScreenHeight;
- (void)setupToolbarItem;
- (id)pictureAirPlayService;
- (void)showBottomRightItem;
- (void)addPictureAirPlayPreview:(id)a0;
- (void)addPictureAirPlayCameraView;
- (void)hideBottomRightItem;
- (void)restorePublicScreenHeight;
- (void)removePictureAirPlayPreview;
- (void)removePictureAirPlayCameraView;
- (void)pushPictureAirPlayBufferWithImage:(id)a0;
- (void)updatePictureAirPlayCameraPosition;
- (void)updatePictureAirPlayCameraOutputSize;
- (BOOL)shouldBlockPictureAirPlay;
- (void)trackItemWithShow:(BOOL)a0;
- (void)handleItemTapped;
- (void)pictureAirPlayInstanceDidOpen:(id)a0;
- (void)pictureAirPlayInstanceDidClose:(id)a0;
- (void)pictureAirPlayInstanceDidSwitchFrom:(id)a0 to:(id)a1;
- (void).cxx_destruct;
- (void)messageReceived:(id)a0;

@end
