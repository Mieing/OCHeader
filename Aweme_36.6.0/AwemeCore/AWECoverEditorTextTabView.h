@class UIButton, UIView;
@protocol AWECoverEditorTextTabViewDelegate;

@interface AWECoverEditorTextTabView : UIView

@property (retain, nonatomic) UIButton *titleBtn;
@property (retain, nonatomic) UIButton *templateBtn;
@property (retain, nonatomic) UIButton *styleBtn;
@property (retain, nonatomic) UIButton *fontBtn;
@property (retain, nonatomic) UIView *bottomLine;
@property (nonatomic) long long currentTab;
@property (weak, nonatomic) id<AWECoverEditorTextTabViewDelegate> delegate;

+ (long long)tabForIndex:(long long)a0;

- (void)updateBottomLineToTab:(long long)a0;
- (void)templateBtnClicked;
- (void)styleBtnClicked;
- (void)fontBtnClicked;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
