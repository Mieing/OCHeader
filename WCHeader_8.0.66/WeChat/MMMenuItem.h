@class UIColor, UIFont, NSString, UIImage;
@protocol MMMenuItemProtocol;

@interface MMMenuItem : UIMenuItem

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } itemFrame;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) long long linePosition;
@property (weak, nonatomic) id<MMMenuItemProtocol> delegate;
@property (copy, nonatomic) id /* block */ menuItemAnimator;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (retain, nonatomic) UIImage *iconImage;
@property (weak, nonatomic) id target;
@property (nonatomic) long long menuType;
@property (retain, nonatomic) id userInfo;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (copy, nonatomic) id /* block */ itemViewCreateHandler;

- (struct CGSize { double x0; double x1; })itemSizeWithWidth:(double)a0;
- (double)preferredItemWidth;
- (id)initWithTitle:(id)a0 icon:(id)a1 action:(SEL)a2;
- (id)initWithTitle:(id)a0 icon:(id)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithTitle:(id)a0 svgName:(id)a1 action:(SEL)a2;
- (id)initWithTitle:(id)a0 svgName:(id)a1 target:(id)a2 action:(SEL)a3;
- (id)initWithTitle:(id)a0 svgName:(id)a1;
- (id)initWithType:(long long)a0 action:(SEL)a1;
- (id)initWithType:(long long)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (id)initWithType:(long long)a0 target:(id)a1 action:(SEL)a2;
- (void).cxx_destruct;

@end
