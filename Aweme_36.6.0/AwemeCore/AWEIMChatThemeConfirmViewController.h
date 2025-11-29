@class AWEIMChatThemeModel, UIButton, AWEIMChatThemeConfirmVCConfig, NSString, UIView, AWEIMThemeSettingPreviewView;
@protocol AWEIMChatThemeConfirmDelegate;

@interface AWEIMChatThemeConfirmViewController : UIViewController <AWEIMHalfScreenContainerVCDelegate>

@property (retain, nonatomic) AWEIMThemeSettingPreviewView *previewView;
@property (nonatomic) long long style;
@property (nonatomic) BOOL isGroup;
@property (retain, nonatomic) AWEIMChatThemeModel *model;
@property (retain, nonatomic) UIView *buttonsContainerView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) AWEIMChatThemeConfirmVCConfig *config;
@property (nonatomic) BOOL adjustForBigFontStyle;
@property (weak, nonatomic) id<AWEIMChatThemeConfirmDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)externalAssignTopDragHeight;
- (void)p_createNaviBar;
- (void)p_closeBtnDidClicked:(id)a0;
- (id)initWithStyle:(long long)a0 chatThemeModel:(id)a1 isGroup:(BOOL)a2;
- (void)p_createContentView;
- (void)p_createBottomButton;
- (BOOL)p_confirmViewHasBackground;
- (void)p_setSelfBtnDidClicked:(id)a0;
- (void)p_setAllBtnDidClicked:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithConfig:(id)a0;
- (void)viewDidLoad;
- (void)loadView;

@end
