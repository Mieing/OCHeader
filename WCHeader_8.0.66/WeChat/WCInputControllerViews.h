@class MMUILabel, EmoticonBoardView, WCInputController, MMGrowTextView, UIView, UIButton;

@interface WCInputControllerViews : NSObject

@property (retain, nonatomic) WCInputController *inputController;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) UIButton *expressionButton;
@property (retain, nonatomic) MMGrowTextView *growTextView;
@property (retain, nonatomic) MMUILabel *remainWordCountLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) EmoticonBoardView *emoticonBoardView;

- (void).cxx_destruct;

@end
