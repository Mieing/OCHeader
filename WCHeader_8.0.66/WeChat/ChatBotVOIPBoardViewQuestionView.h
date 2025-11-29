@class UILabel, QuestionInfo;

@interface ChatBotVOIPBoardViewQuestionView : UIView

@property (retain, nonatomic) QuestionInfo *questionInfo;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UILabel *contentView;

- (id)initWithQuestion:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)initView;
- (void)updateQuestion:(id)a0;
- (void)showStartText;
- (void)showNextText;
- (void)showEndText;
- (void).cxx_destruct;

@end
