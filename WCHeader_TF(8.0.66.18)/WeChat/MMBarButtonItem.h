@class UIColor, NSString, UIFont, UIButton;

@interface MMBarButtonItem : UIBarButtonItem <NSCopying>

@property (nonatomic) long long itemStyle;
@property (retain, nonatomic) NSString *buttonTitle;
@property (nonatomic) unsigned long long buttonStyle;
@property (weak, nonatomic) id buttonTarget;
@property (nonatomic) SEL buttonAction;
@property (nonatomic) double maxWidth;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSString *buttonImageName;
@property (retain, nonatomic) NSString *accessibility;
@property (weak, nonatomic) UIButton *m_btn;

- (void)setEnabled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
