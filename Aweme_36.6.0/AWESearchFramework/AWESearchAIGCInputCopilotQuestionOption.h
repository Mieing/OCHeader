@class UILabel, UIImageView;

@interface AWESearchAIGCInputCopilotQuestionOption : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *selectIconImageView;

- (struct CGSize { double x0; double x1; })titleLabelSizeWithViewWidth:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 title:(id)a1 selectCallback:(id /* block */)a2;
- (BOOL)isOverWidth:(double)a0;
- (struct CGSize { double x0; double x1; })layoutWithMaxWidth:(double)a0;
- (void).cxx_destruct;

@end
