@class NSMutableArray, UILabel, UIView, UIButton;

@interface AWEIMFoldMessageRiskWarningView : UIView

@property (copy, nonatomic) id /* block */ agreeTapAction;
@property (copy, nonatomic) id /* block */ disagreeTapAction;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *positiveLabel;
@property (retain, nonatomic) UILabel *negativeLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *agreeButton;
@property (retain, nonatomic) UIButton *disagreeButton;
@property (retain, nonatomic) NSMutableArray *bindsArr;

- (void)bindWithModel:(id)a0;
- (void)p_addGesture;
- (void)p_addSubViews;
- (void)p_constraintSubViews;
- (void)setHuggingAndCompressionWithLabel:(id)a0 priority:(float)a1;
- (void)p_onTapAgree;
- (void)p_onTapDisAgree;
- (void).cxx_destruct;
- (id)init;

@end
