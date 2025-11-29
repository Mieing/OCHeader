@class UIViewController, AFDMomentCameraContext, NSString, AFDMomentCameraViewModelFactory;
@protocol ACCServiceProvideRecipe, IESServiceProvider, AFDCameraViewLayoutProtocol, AFDMomentCameraBaseComponentDelegate;

@interface AFDMomentCameraBaseComponent : NSObject <AFDMomentCameraBaseComponentProtocol>

@property (weak, nonatomic) id<IESServiceProvider> shootServiceProvider;
@property (weak, nonatomic) id<AFDMomentCameraBaseComponentDelegate> delegate;
@property (readonly, weak, nonatomic) AFDMomentCameraViewModelFactory *viewModelFactory;
@property (weak, nonatomic) UIViewController *controller;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (readonly, weak, nonatomic) id<AFDCameraViewLayoutProtocol> layoutManager;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
