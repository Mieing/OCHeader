@class NSString, UIView;
@protocol TranslateLanguageSelectViewDelegate;

@interface TranslateLanguageSelectView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>

@property (retain, nonatomic) UIView *selectedPanelView;
@property (nonatomic) BOOL bShowCloseBtn;
@property (weak, nonatomic) id<TranslateLanguageSelectViewDelegate> delegate;
@property (retain, nonatomic) NSString *selectedLanguageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bShowCloseBtn:(BOOL)a1;
- (void)configPageSheet;
- (void)configSelectedPanelView;
- (void)setChatName:(id)a0;
- (id)getChatName;
- (void)showWithAnimated:(BOOL)a0;
- (void)onTapSelectLanguageButton:(id)a0;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)pageSheetWillClose:(BOOL)a0;
- (void).cxx_destruct;

@end
