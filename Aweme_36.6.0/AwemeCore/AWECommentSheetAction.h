@class NSString, UIImage, UIView, NSNumber, NSAttributedString;

@interface AWECommentSheetAction : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL disableAnimation;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSNumber *numberOfLine;
@property (retain, nonatomic) NSAttributedString *attributeStr;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL hideBottomLine;
@property (nonatomic) double contentHeight;
@property (nonatomic) BOOL contentViewUserInteractionEnabled;
@property (nonatomic) BOOL ignoreContentLabelTextColorRewrite;
@property (copy, nonatomic) NSString *accessibilityDescription;

+ (id)actionWithTitle:(id)a0 icon:(id)a1 handler:(id /* block */)a2;
+ (id)actionWithTitle:(id)a0 style:(unsigned long long)a1 icon:(id)a2 handler:(id /* block */)a3;
+ (id)actionWithContentView:(id)a0 handler:(id /* block */)a1;
+ (id)actionWithContentView:(id)a0 disableAnimation:(BOOL)a1 handler:(id /* block */)a2;
+ (id)actionWithTitle:(id)a0 attributeStr:(id)a1 style:(unsigned long long)a2 icon:(id)a3 numberOfLine:(id)a4 disableAnimation:(BOOL)a5 handler:(id /* block */)a6;
+ (id)actionWithTitle:(id)a0 style:(unsigned long long)a1 imgName:(id)a2 handler:(id /* block */)a3;
+ (id)actionWithTitle:(id)a0 imgName:(id)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;
- (void)trigger;

@end
