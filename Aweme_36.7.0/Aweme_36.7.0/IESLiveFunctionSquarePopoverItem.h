@class NSString, UIFont, UIColor;

@interface IESLiveFunctionSquarePopoverItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL select;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) double height;
@property (copy, nonatomic) id /* block */ clickBlock;

- (id)initWithTitle:(id)a0 clickBlock:(id /* block */)a1;
- (void).cxx_destruct;

@end
