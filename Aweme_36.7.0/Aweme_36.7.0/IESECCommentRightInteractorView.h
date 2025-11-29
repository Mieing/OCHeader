@class IESECCommentMediaItemViewModel, UILabel, UIView, UIButton;

@interface IESECCommentRightInteractorView : UIView

@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UILabel *likeCountLabel;
@property (retain, nonatomic) UIView *likeAndCountButton;
@property (nonatomic) BOOL isAnimationing;
@property (retain, nonatomic) IESECCommentMediaItemViewModel *model;
@property (copy, nonatomic) id /* block */ clickLikeButtonBlock;
@property (nonatomic) unsigned long long enterFrom;

- (void)likeButtonTapped:(id)a0;
- (void)updateLikeButtonStatus:(id)a0;
- (id)likeCountsFormated:(id)a0;
- (void)updateViewWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
