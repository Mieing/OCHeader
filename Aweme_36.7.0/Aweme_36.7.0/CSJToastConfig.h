@class UIColor, UIFont, NSString;

@interface CSJToastConfig : NSObject

@property (nonatomic) long long postion;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) float duration;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } insets;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) long long alignment;
@property (nonatomic) struct CGSize { double width; double height; } superViewSize;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (copy, nonatomic) id /* block */ showCompletion;
@property (copy, nonatomic) id /* block */ dismissCompletion;

- (void).cxx_destruct;
- (id)init;

@end
