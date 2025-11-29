@class IESLiveMoreToolsSettingHeadConfig, UILabel, UIScrollView;

@interface IESLiveMoreToolsScrollSettingView : UIView

@property (retain, nonatomic) IESLiveMoreToolsSettingHeadConfig *headConfig;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UIScrollView *contentView;
@property (nonatomic) BOOL useStandardPanel;

+ (double)settingViewHeight:(id)a0 titleHeight:(double)a1;
+ (double)settingViewHeight:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 config:(id)a1;
- (void)refreshWith:(id)a0;
- (void)initViewWithSettingItems:(id)a0;
- (double)initSectionHeaderViewWithItem:(id)a0 topY:(double)a1 needShowLineView:(BOOL)a2;
- (void).cxx_destruct;
- (void)updateTitle:(id)a0;

@end
