@class UILabel, UIImageView, UIView, RichTextView, WCFinderComment;

@interface WCFinderBulletAnimationCommentView : MMUIView

@property (retain, nonatomic) RichTextView *richText;
@property (retain, nonatomic) WCFinderComment *comment;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) UILabel *likeNumLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithComment:(id)a0;
- (void).cxx_destruct;

@end
