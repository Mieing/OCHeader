@class CECMomentCameraTextViewModel;

@interface CECMCPublishPrivacyViewModel : AFDMomentCameraBaseViewModel

@property (nonatomic) BOOL isShouldShowPrivateView;
@property (weak, nonatomic) CECMomentCameraTextViewModel *textViewModel;

- (void)setupViewModel;
- (void).cxx_destruct;

@end
