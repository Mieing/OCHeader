@class UIButton, NSString;
@protocol WCCommonInputViewDelegate;

@interface WCSingleEmoticonInputView : UIView <WCInputViewProtocol>

@property (retain, nonatomic) UIButton *expressionButton;
@property (weak, nonatomic) id<WCCommonInputViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (id)svgIconName:(id)a0 isHighlight:(BOOL)a1;
- (void)onExpressionButtonClicked:(id)a0;
- (void)setInputMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
