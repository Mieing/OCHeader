@class NSString, IESECButton;

@interface IESECWinReplayButtonComponent : UIView <IESECLLComponent>

@property (retain, nonatomic) IESECButton *replayButton;
@property (retain, nonatomic) NSString *buttonText;
@property (copy, nonatomic) id /* block */ clickReplayButtonBlock;

+ (id /* block */)replayButtonWithButtonSize:(struct CGSize { double x0; double x1; })a0 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 iconSize:(struct CGSize { double x0; double x1; })a2 textFontSize:(double)a3 iconTextSpacing:(double)a4 backgroundColor:(id)a5;

- (void)updateUIWithModel:(id)a0;
- (void)didTapReplayButton;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;

@end
