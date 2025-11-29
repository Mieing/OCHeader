@class ACCTextStickerEditColorListView, AWEStoryFontChooseView, NSArray, NSString, AWETextToolStackView, ACCTextTemplateSwitcher, UIView;
@protocol ACCTextStickerEditToolBarDelegate;

@interface ACCTextStickerEditToolBar : UIView <ACCTextStickerColorListDelegate>

@property (retain, nonatomic) AWETextToolStackView *stackView;
@property (retain, nonatomic) AWEStoryFontChooseView *fontChooseView;
@property (retain, nonatomic) ACCTextStickerEditColorListView *colorChooseView;
@property (retain, nonatomic) NSArray *toolOptions;
@property (retain, nonatomic) ACCTextTemplateSwitcher *templateSwitcher;
@property (retain, nonatomic) UIView *separateLine;
@property (nonatomic) unsigned long long textEditStyle;
@property (nonatomic) BOOL isShowingColorView;
@property (weak, nonatomic) id<ACCTextStickerEditToolBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectWithFontID:(id)a0;
- (void)didClickCloseButton;
- (void)clearSelectFont;
- (void)switchToToolOption:(unsigned long long)a0;
- (void)selectWithColor:(id)a0;
- (void)clearSelectColor;
- (void)didSelectedColor:(id)a0 indexPath:(id)a1;
- (void)resetEditToolBar;
- (void)switchToTextToolOptionTab:(unsigned long long)a0;
- (void)updateColorViewShowStatus:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 editStyle:(unsigned long long)a1 identityList:(id)a2 optionList:(id)a3;
- (void)setupBarWithEditStyle:(unsigned long long)a0 identityList:(id)a1 optionList:(id)a2;
- (void)setupToolSwitcher;
- (void)setupStackViewWithIdentityList:(id)a0;
- (void).cxx_destruct;

@end
