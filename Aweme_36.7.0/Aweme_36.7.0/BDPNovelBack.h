@class UIColor, NSString, UIImageView, UILabel;

@interface BDPNovelBack : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *backIcon;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) id /* block */ clickBlock;

- (id)initWithClickBlock:(id /* block */)a0;
- (void)updateTitle:(id)a0 color:(id)a1 normalback:(id)a2 darkback:(id)a3;
- (void)updateBackFrame;
- (void).cxx_destruct;
- (BOOL)isDark;
- (void)tapped;

@end
