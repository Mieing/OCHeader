@class NSString;
@protocol AFDSkylightMomentListControllerProtocol;

@interface AFDSkyMomentPendantComponent : AFDSkylightBaseComponent <AWEIMSkylightCellComponentEvent, AFDSkyMomentPlusButtonPresenterDelegate>

@property (weak, nonatomic) id<AFDSkylightMomentListControllerProtocol> listController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHitShowMomentPlusEntryTest;
+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (id)momentColorRingInfo;
- (void)updateComponentAfterModelUpdate;
- (void)skyCellWillDisplay;
- (void)updatePresenterInfo;
- (void)trackOnlineBoardIconClick;
- (void)trackOnlineBoardIconShow;
- (void)onPlusButtonTapped;
- (void).cxx_destruct;

@end
