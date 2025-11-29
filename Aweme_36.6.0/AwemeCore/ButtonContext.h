@class NSString, UIColor;

@interface ButtonContext : NSObject

@property (retain, nonatomic) NSString *buttonName;
@property (nonatomic) BOOL buttonEnable;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;

- (id)initWithButtonName:(id)a0 buttonEnable:(BOOL)a1 backgroundColor:(id)a2 textColor:(id)a3;
- (void).cxx_destruct;

@end
