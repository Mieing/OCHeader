@class UILabel, UIImageView, UIView;

@interface AWEThemeItemView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *describeLable;
@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=isSelected) BOOL selected;

+ (id)themeItemViewWithType:(unsigned long long)a0 title:(id)a1 describe:(id)a2 selected:(BOOL)a3 showLine:(BOOL)a4;

- (void)setBottomLineHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)createUI;

@end
