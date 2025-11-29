@class NSString;
@protocol AFDSkylightMomentListControllerProtocol, AFDCloseFriendsColorRingDisplayManagerProtocol, AWEIMSkylightCellColorRingInterface;

@interface AFDSkyUserColorRingComponent : AFDSkylightBaseComponent <AFDCloseFriendsColorRingDisplayManagerDelegate, AWEIMSkylightCellComponentEvent>

@property (retain, nonatomic) id<AFDCloseFriendsColorRingDisplayManagerProtocol> colorRingDisplayManager;
@property (weak, nonatomic) id<AFDSkylightMomentListControllerProtocol> listController;
@property (weak, nonatomic) id<AWEIMSkylightCellColorRingInterface> colorRingInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (BOOL)cf_canShowColorRingWithRingStatus:(long long)a0;
- (id)cf_transitionTargetView;
- (void)cf_didUpdateByColorRingChanged;
- (id)momentColorRingInfo;
- (void)updateComponentAfterModelUpdate;
- (void)skyCellWillDisplay;
- (void)updatePresenterInfo;
- (id)createColorRingDisplayManager;
- (void)updateFromScene;
- (void).cxx_destruct;

@end
