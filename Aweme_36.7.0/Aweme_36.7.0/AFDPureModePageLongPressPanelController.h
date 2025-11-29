@class UILongPressGestureRecognizer, NSString;
@protocol AFDPureModePageLongPressPanelDelegate;

@interface AFDPureModePageLongPressPanelController : AWEBaseController <AFDPureModePageControllerProtocol, UIGestureRecognizerDelegate>

@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (weak, nonatomic) id<AFDPureModePageLongPressPanelDelegate> longPressPanelDelegate;
@property (nonatomic) BOOL albumImagePickerShowed;
@property (nonatomic) BOOL albumImageAddToCustomPickerShowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldShowFastSpeed:(id)a0;
- (void)addAlbumImageNotifications;
- (void)showLongPressPanelWithGesture:(id)a0;
- (void)bindToSpeedControlViewModel;
- (void)onAlbumImagePickerShowNotification:(id)a0;
- (void)onAlbumImagePickerHideNotification:(id)a0;
- (void)onAlbumImageAddToCustomPickerShowNotification:(id)a0;
- (void)onAlbumImageAddToCustomPickerHideNotification:(id)a0;
- (id)model;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)isInteracting;
- (void)viewDidLoad;
- (void)dealloc;
- (void)handleLongPressGesture:(id)a0;

@end
