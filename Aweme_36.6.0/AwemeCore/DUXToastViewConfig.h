@class UIColor, NSString, UIView, DUXToastUIConfigModel;

@interface DUXToastViewConfig : NSObject

@property (retain, nonatomic) DUXToastUIConfigModel *uiConfig;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *highlightedText;
@property (copy, nonatomic) id /* block */ highlightedTextClickBlock;
@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UIColor *toastBackgroundColor;
@property (retain, nonatomic) UIColor *contentColor;
@property (nonatomic) unsigned long long enlargeType;

- (void).cxx_destruct;
- (id)init;

@end
