@class UILabel, NSString;

@interface AWEPayRPDetailEmoticonView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) id /* block */ emoticonClickBlock;
@property (copy, nonatomic) NSString *title;

- (void)updateWithEmotcionList:(id)a0;
- (void)p_emoticonTapped:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
