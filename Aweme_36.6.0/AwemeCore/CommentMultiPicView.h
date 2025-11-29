@class IESLLGDCommentItemViewModel, NSArray, UserInfoView, UIView, UILabel, NSMutableArray;

@interface CommentMultiPicView : UIView

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) IESLLGDCommentItemViewModel *item;
@property (copy, nonatomic) NSArray *imageUrls;
@property (retain, nonatomic) UserInfoView *userInfoView;
@property (retain, nonatomic) UIView *commentContentView;
@property (retain, nonatomic) UILabel *commentContentLabel;
@property (retain, nonatomic) UIView *commentPicListView;
@property (retain, nonatomic) NSMutableArray *imageViews;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
