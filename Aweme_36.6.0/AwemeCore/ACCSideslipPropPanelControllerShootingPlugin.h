@class ACCSideslipPropLongPressGestureRecognizer, NSString, UIView;
@protocol ACCSideslipPropPanelControllerProtocol, ACCRecordPropService, ACCRecorderSideslipViewContainerProtocol, ACCSideslipPropPanelService, ACCSideslipPropService, ACCSideslipPropViewContainerProtocol, ACCLightningCaptureButtonAnimationProtocol, ACCShootSourceService;

@interface ACCSideslipPropPanelControllerShootingPlugin : NSObject <UIGestureRecognizerDelegate, ACCSideslipPropPickCollectionViewSubscriber, AWEStickerPickerControllerPluginProtocol>

@property (weak, nonatomic) id<ACCSideslipPropPanelControllerProtocol> controller;
@property (weak, nonatomic) id<ACCSideslipPropViewContainerProtocol> viewContainer;
@property (weak, nonatomic) id<ACCRecorderSideslipViewContainerProtocol> slipRecorderViewContainer;
@property (weak, nonatomic) id<ACCSideslipPropService> sideslipPropService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) ACCSideslipPropLongPressGestureRecognizer *longPressGesture;
@property (weak, nonatomic) UIView<ACCLightningCaptureButtonAnimationProtocol> *recordButton;
@property (weak, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_bindService;
- (void)sideslipPropPickCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)controllerViewDidLoad:(id)a0;
- (void)setupLongPressShooting;
- (void)longPressShootingAction:(id)a0;
- (BOOL)allowShooting;
- (void)p_startShootingIfNeeded;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;

@end
