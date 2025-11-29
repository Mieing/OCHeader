@class UILabel;

@interface AWESearchAIGCInputCreatePanelTittleCell : AWESearchAIGCInputCreatePanelBaseCell

@property (retain, nonatomic) UILabel *titleLabel;

+ (double)viewHeightWithViewModel:(id)a0;

- (void)themeChange;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)dealloc;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
