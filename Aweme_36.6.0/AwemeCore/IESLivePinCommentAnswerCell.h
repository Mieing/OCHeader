@class UILabel, IESLivePinCommentCheckTipView;

@interface IESLivePinCommentAnswerCell : IESLivePinCommentBaseCell

@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) IESLivePinCommentCheckTipView *checkTipView;

- (id)paramsWithNode:(id)a0;
- (void)configWithNode:(id)a0 containerWidth:(double)a1;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
