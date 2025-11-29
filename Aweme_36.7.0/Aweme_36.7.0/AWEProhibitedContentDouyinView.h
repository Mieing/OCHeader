@class UIImageView, UILabel, NSString;

@interface AWEProhibitedContentDouyinView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSString *text;

- (void)configUI;
- (void)updateFont:(id)a0;
- (void)didChangedLanguage;
- (void)setIcon:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
