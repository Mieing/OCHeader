@class UIColor, NSString, ACCCameraSubscription, UIImage;
@protocol ACCStickerServiceProtocol, AFDSocialTextStickerService, AWEPublishPrivacySettingHandlerProtocol;

@interface AFDEditTextBottomBarViewModel : ACCEditViewModel <AWEPublishPrivacySettingSubscriber, AFDEditTextBottomBarService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL locationCheckMarkHidden;
@property (nonatomic) BOOL publishButtonEnabled;
@property (retain, nonatomic) UIImage *locationImage;
@property (retain, nonatomic) NSString *locationText;
@property (retain, nonatomic) UIImage *privacyImage;
@property (retain, nonatomic) NSString *privacyText;
@property (retain, nonatomic) UIColor *publishButtonColor;
@property (retain, nonatomic) NSString *publishButtonText;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<AFDSocialTextStickerService> textStickerService;
@property (retain, nonatomic) id<AWEPublishPrivacySettingHandlerProtocol> privacyHandler;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didTapStory25PrivacyButton;
- (void)didTapStory25PublishButton;
- (void)didTapPublishButton;
- (void)updatePublishButtonEnable;
- (void)didTapPOIButton;
- (void)didTapPrivacyButton;
- (void)updateStory25BottomBar;
- (void)updateBottomBarWithModel:(id)a0;
- (void)publishPrivacySettingHandler:(id)a0 didChangeWithInfo:(id)a1;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)addSubscriber:(id)a0;

@end
