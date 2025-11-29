@class NSMutableDictionary, AWESimpleContainer;
@protocol ACCServiceProvideRecipe, AFDMomentCameraBaseViewModelDelegate;

@interface AFDMomentCameraViewModelFactory : NSObject

@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (retain, nonatomic) AWESimpleContainer *viewModelContainer;
@property (retain, nonatomic) NSMutableDictionary *viewModelDict;
@property (weak, nonatomic) id<AFDMomentCameraBaseViewModelDelegate> delegate;

- (id)resolveObject:(id)a0;
- (id)getViewModel:(Class)a0;
- (void)registerWeakInstance:(id)a0 forProtocol:(id)a1;
- (id)initWithServiceProvider:(id)a0 viewModelDelegate:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
