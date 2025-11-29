@class AFDButton, CAShapeLayer, UIImageView, UILabel, DUXCheckBox;

@interface AWEProfileEditFlowAvatarView : AWEProfileEditFlowStepView

@property (retain, nonatomic) AFDButton *choosePhotoButton;
@property (retain, nonatomic) UILabel *choosePhotoLabel;
@property (retain, nonatomic) UILabel *publishAsStoryLabel;
@property (retain, nonatomic) DUXCheckBox *publishAsStoryCheckBox;
@property (retain, nonatomic) CAShapeLayer *avatarDashedLineBorderLayer;
@property (retain, nonatomic) UIImageView *cameraImageView;

- (void)awe_themeReload;
- (void)p_updateUI;
- (void)p_choosePhoto:(id)a0;
- (void)p_selectPublishAsStory:(id)a0;
- (void)tapNextButton:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
