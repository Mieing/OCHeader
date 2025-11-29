@class UITapGestureRecognizer;

@interface AWEIMQuestionsAndAnswersActivityMessageContentView : AWEIMGeneralCardView

@property (copy, nonatomic) id /* block */ tappedBlock;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;

- (void)p_didTapped:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
