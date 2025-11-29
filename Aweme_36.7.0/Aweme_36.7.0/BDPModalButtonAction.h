@class UIColor, UIFont, NSString;

@interface BDPModalButtonAction : NSObject

@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) UIFont *font;
@property (nonatomic) BOOL colorValid;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long style;
@property (copy, nonatomic) id /* block */ handler;

+ (id)actionWithTitle:(id)a0 color:(id)a1 handler:(id /* block */)a2;
+ (id)actionWithTitle:(id)a0 style:(long long)a1 handler:(id /* block */)a2;

- (void).cxx_destruct;

@end
