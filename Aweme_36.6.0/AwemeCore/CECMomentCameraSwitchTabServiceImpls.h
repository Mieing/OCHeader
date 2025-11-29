@class NSString, CECMomentCameraSwitchTabConfig;
@protocol ACCServiceProvideRecipe;

@interface CECMomentCameraSwitchTabServiceImpls : NSObject <CECMomentCameraSwitchTabService>

@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceProvider;
@property (retain, nonatomic) CECMomentCameraSwitchTabConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configResolver:(id)a0;
- (void).cxx_destruct;

@end
