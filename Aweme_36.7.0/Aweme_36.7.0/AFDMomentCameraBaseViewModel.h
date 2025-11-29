@class AFDMomentCameraViewModelFactory;
@protocol AFDMomentCameraBaseViewModelDelegate, ACCServiceProvideRecipe;

@interface AFDMomentCameraBaseViewModel : NSObject

@property (weak, nonatomic) id<AFDMomentCameraBaseViewModelDelegate> delegate;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (readonly, weak, nonatomic) AFDMomentCameraViewModelFactory *viewModelFactory;

- (void)setupViewModel;
- (void)injectService;
- (id)initWithViewModelFactory:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
