@class UIFont, NSShadow, UIColor, NSMutableParagraphStyle;

@interface ACCStickerTextAttributes : NSObject

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSShadow *shadow;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSMutableParagraphStyle *style;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double baselineOffset;

+ (id)textColorWithColor:(id)a0 style:(unsigned long long)a1;
+ (id)build:(id /* block */)a0;

- (void).cxx_destruct;
- (id)build;

@end
