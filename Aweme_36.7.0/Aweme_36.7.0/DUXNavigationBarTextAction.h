@class UIButton, DUXNavigationBarConfigModel, NSString;

@interface DUXNavigationBarTextAction : NSObject <DUXNavigationBarAction>

@property (retain, nonatomic) UIButton *textButton;
@property (retain, nonatomic) DUXNavigationBarConfigModel *uiConfig;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL disabled;
@property (nonatomic) unsigned long long enlargeType;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) double actionPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithText:(id)a0 onClickBlock:(id /* block */)a1;
+ (id)actionWithText:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2 withActionPadding:(double)a3;
+ (id)actionWithText:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2;

- (void)updateTextButtonStyle;
- (void)updateTextButtonFont;
- (void)updateActionPaddingIfNeeded;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionView;
- (void)click;

@end
