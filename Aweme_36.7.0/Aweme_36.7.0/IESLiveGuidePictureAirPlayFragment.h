@class IESLiveGuideToolBarItem, IESLiveAnchorPictureAirPlayPreView, NSString;

@interface IESLiveGuidePictureAirPlayFragment : IESLiveGuideComponent <IESLiveAnchorPictureAirPlayObserver, IESLiveGuideActions>

@property (retain, nonatomic) IESLiveGuideToolBarItem *pictureAirPlayItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originCameraRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } currentCameraRect;
@property (retain, nonatomic) IESLiveAnchorPictureAirPlayPreView *pictureAirPlayPreview;
@property (nonatomic) BOOL requestingPermission;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentUnmount;
- (id)commonTrackParams;
- (void)showToastWithText:(id)a0;
- (void)liveTypeDidChange:(unsigned long long)a0;
- (void)setupToolbarItem;
- (id)pictureAirPlayService;
- (void)addPictureAirPlayPreview:(id)a0;
- (void)removePictureAirPlayPreview;
- (BOOL)shouldBlockPictureAirPlay;
- (void)handleItemTapped;
- (void)pictureAirPlayInstanceDidOpen:(id)a0;
- (void)pictureAirPlayInstanceDidClose:(id)a0;
- (void)pictureAirPlayInstanceDidSwitchFrom:(id)a0 to:(id)a1;
- (void)registerToolbarItemToNormalContainer;
- (void)handlePictureAirPlayBlockOtherFunctions;
- (void)handleLiveTypeChangeBlockPictureAirPlay;
- (void)updateCameraContainerFrame;
- (void)restoreCameraContainerFrame;
- (void).cxx_destruct;

@end
