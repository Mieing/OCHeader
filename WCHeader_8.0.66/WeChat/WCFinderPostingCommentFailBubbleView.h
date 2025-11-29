@class UIImageView, UILabel, WCFinderComment, UIButton;
@protocol WCFinderPostingCommentFailBubbleViewDelegate;

@interface WCFinderPostingCommentFailBubbleView : WCFinderTimelineBubbleView

@property (retain, nonatomic) UIButton *backGroundButton;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (weak, nonatomic) id<WCFinderPostingCommentFailBubbleViewDelegate> delegate;
@property (retain, nonatomic) WCFinderComment *commentFailInfo;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;
- (void)adjustButtonWidth:(double)a0;
- (void)clickButtonAction;
- (id)getBubbleBtn;
- (void).cxx_destruct;

@end
