@class UIImageView, UILabel;

@interface AWESearchAIGCInputAgentCell : AWESearchAIGCInputAgentBaseCell

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *nameLabel;

+ (id)nameLabelFont;
+ (struct CGSize { double x0; double x1; })sizeWithModel:(id)a0;

- (void)themeChange;
- (void)refreshBackgroundColor;
- (BOOL)isKeyBoardNewStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
