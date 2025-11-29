@class IESLLGDCommentItemViewModel, NSString, UserInfoView, UIImageView, UIView, UILabel;

@interface CommentSingleInfoView : UIView

@property (retain, nonatomic) IESLLGDCommentItemViewModel *item;
@property (copy, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *leftContentView;
@property (retain, nonatomic) UserInfoView *userInfoView;
@property (retain, nonatomic) UIView *commentContentView;
@property (retain, nonatomic) UILabel *commentContentLabel;
@property (retain, nonatomic) UIView *rightContentView;
@property (retain, nonatomic) UIImageView *commentImageView;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
