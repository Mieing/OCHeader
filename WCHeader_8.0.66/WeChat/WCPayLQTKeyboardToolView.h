@class UILabel, NSArray, HintOfKeyboard;
@protocol WCPayLQTKeyboardToolViewDelegate;

@interface WCPayLQTKeyboardToolView : UIView

@property (retain, nonatomic) HintOfKeyboard *currentHint;
@property (retain, nonatomic) UILabel *profitLabel;
@property (retain, nonatomic) NSArray *amountLabels;
@property (retain, nonatomic) NSArray *separators;
@property (weak, nonatomic) id<WCPayLQTKeyboardToolViewDelegate> delegate;
@property (retain, nonatomic) NSArray *hints;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)updateHintWithBankType:(id)a0;
- (void)refreshView;
- (void)layoutSubviews;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)highlightColor;
- (void).cxx_destruct;

@end
