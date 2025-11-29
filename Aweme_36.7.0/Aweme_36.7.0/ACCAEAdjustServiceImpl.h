@class ACCCameraSubscription, UIViewController, NSString;
@protocol ACCEditAdjustPanelDelegate, AWETabFilterViewControllerProtocol, ACCEditAdjustPanelDataSource, AWESliderDelegate;

@interface ACCAEAdjustServiceImpl : NSObject <ACCAEAdjustServiceProtocol>

@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (weak, nonatomic) id<ACCEditAdjustPanelDelegate> adjustPanelDelegate;
@property (weak, nonatomic) id<ACCEditAdjustPanelDataSource> adjustPanelDataSource;
@property (weak, nonatomic) id<AWESliderDelegate> adjustSliderDelegate;
@property (weak, nonatomic) UIViewController<AWETabFilterViewControllerProtocol> *tabFilterController;
@property (nonatomic) BOOL didChangeAdjust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)adjustPanelDidShow;
- (void)adjustPanelDidDismiss;
- (void)setupTabFilterController:(id)a0;
- (void)notifyAdjustDidChanged;
- (void)notifySelectTabDidChanged;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
