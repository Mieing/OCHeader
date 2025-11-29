@class UIButton, NSString, NSAttributedString;

@interface DUXSearchBarTextAction : NSObject <DUXSearchBarAction>

@property (retain, nonatomic) UIButton *textButton;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSAttributedString *attributeText;
@property (nonatomic) BOOL disabled;
@property (nonatomic) unsigned long long enlargeType;
@property (copy, nonatomic) id /* block */ onClick;
@property (nonatomic) struct CGSize { double width; double height; } actionSize;
@property (nonatomic) double actionPadding;
@property (nonatomic) double maxScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithText:(id)a0 onClickBlock:(id /* block */)a1;
+ (id)actionWithText:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2 withActionPadding:(double)a3;
+ (id)actionWithAttributeText:(id)a0 onClickBlock:(id /* block */)a1;
+ (id)actionWithText:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2;
+ (id)actionWithAttributeText:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2;
+ (id)actionWithAttributeText:(id)a0 onClickBlock:(id /* block */)a1 withActionSize:(struct CGSize { double x0; double x1; })a2 withActionPadding:(double)a3;

@end
