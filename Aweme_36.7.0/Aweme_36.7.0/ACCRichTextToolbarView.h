@class AWEVideoPublishViewModel, UISelectionFeedbackGenerator, ACCRichTextSocialToolbar, UIView, ACCButton, CALayer;
@protocol ACCRichTextToolbarDelegate;

@interface ACCRichTextToolbarView : UIView

@property (retain, nonatomic) UIView *generalContainerView;
@property (retain, nonatomic) ACCButton *changeColorButton;
@property (retain, nonatomic) ACCButton *fontButton;
@property (retain, nonatomic) ACCButton *atUserButton;
@property (retain, nonatomic) ACCButton *poiButton;
@property (retain, nonatomic) ACCButton *publishPrivacyButton;
@property (retain, nonatomic) ACCButton *keyboardButton;
@property (retain, nonatomic) ACCRichTextSocialToolbar *socialToolbar;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originFrame;
@property (retain, nonatomic) CALayer *socialTopLineLayer;
@property (nonatomic) long long toolbarStyle;
@property (nonatomic) unsigned long long currentToolBarStatus;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedback;
@property (weak, nonatomic) id<ACCRichTextToolbarDelegate> delegate;

+ (Class)aAWESearchModuleServiceDOUYINSSAdaperClass;
+ (Class)aAWEMainModuleServiceDOUYINJXAdapterClass;
+ (double)defaulBarHeightWithStatus:(unsigned long long)a0;

- (id)aAWESearchModuleServiceDOUYINSSAdaper;
- (id)aAWEMainModuleServiceDOUYINJXAdapter;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 publishModel:(id)a1;
- (void)updateToolbarPOIButton:(id)a0;
- (void)updateCurrentStyleModel:(id)a0;
- (void)updateCurrentFrameWithStatus:(unsigned long long)a0;
- (double)currentToolbarHeight;
- (void)socialToolbarSearchWithType:(unsigned long long)a0 keyword:(id)a1;
- (void)configColorStyle:(long long)a0;
- (void)generateLightImpact;
- (void)updateCurrentStyle:(long long)a0;
- (void)toolbarChangeColorButtonAction;
- (void)toolbarChangeFontButtonAction;
- (void)toolbarAtUserButtonAction;
- (void)toolbarSelectPoiButtonAction;
- (void)toolbarPublishPrivacyButtonAction;
- (void)toolbarHideKeyboardButtonAction;
- (void).cxx_destruct;
- (void)cancelSearch;
- (void)setupUI;

@end
