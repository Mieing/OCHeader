@class UIScrollView, AFDRichAwemeFullPageAnchorViewUIConfig, AFDRichAwemeFullPageAnchorView, UIView, AWEAwemeModel, AFDRichAwemeFullPageAnchorModel;

@interface AFDRichAwemeFullPageAnchorContainerView : UIView

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorView *musicAnchorView;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorView *extraAnchorView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorViewUIConfig *uiConfig;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorModel *musicAnchorModel;
@property (retain, nonatomic) AFDRichAwemeFullPageAnchorModel *extraAnchorModel;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) unsigned long long musicAnchorStyle;
@property (nonatomic) unsigned long long extraAnchorStyle;
@property (nonatomic) unsigned long long poiPositionStyle;

- (void)awe_themeDidChange:(long long)a0;
- (double)calculateExtraAnchorViewWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)configUIWithAnimated:(BOOL)a0;
- (void)configUI;
- (BOOL)shouldShowExtraAnchorView;
- (BOOL)shouldShowMusicAnchorView;
- (void)changeExtraAnchorViewInnerSpacing;
- (void)makeNewExtraAnchorStyleUI:(long long)a0;
- (void)updateNewExtraAnchorStyleIcon:(long long)a0;
- (void)makeNewMusciAnchorStyleUI:(long long)a0;
- (void)updateNewMusciAnchorStyleIcon:(long long)a0;
- (void)makeSingleAnchorConstraints:(id)a0;
- (void)configNewAnchorIcon:(id)a0 withUrl:(id)a1;
- (id)getWeakStyleIcon:(id)a0 withThemeStyle:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI;
- (BOOL)isScrollable;

@end
