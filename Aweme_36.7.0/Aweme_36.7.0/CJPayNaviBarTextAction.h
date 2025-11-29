@class UIColor, NSString, CJPayButton, CJPayLabel;

@interface CJPayNaviBarTextAction : NSObject <CJPayNavigationBarActionProtocol>

@property (retain, nonatomic) CJPayButton *textButton;
@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) CJPayLabel *titleLabel;
@property (copy, nonatomic) id /* block */ clickAction;
@property (nonatomic) struct CGSize { double width; double height; } interactionSize;
@property (nonatomic) struct CGSize { double width; double height; } actionViewSize;
@property (nonatomic) double adjacentPadding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithText:(id)a0 clickAction:(id /* block */)a1;
- (void)p_setupActionParams;
- (void)p_clickAction;
- (void).cxx_destruct;
- (id)actionView;

@end
