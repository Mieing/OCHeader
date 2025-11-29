@class UIImageView, UILabel, UIView;

@interface IESLLGDImageRateSkeletonView : UIView

@property (retain, nonatomic) UIView *loadingContentView;
@property (retain, nonatomic) UIView *titleBox;
@property (retain, nonatomic) UIView *firstCommentBox;
@property (retain, nonatomic) UIView *firstLeftContent;
@property (retain, nonatomic) UIView *firstAvatorView;
@property (retain, nonatomic) UIView *firstAvatorBox;
@property (retain, nonatomic) UIView *firstAvatorInfo;
@property (retain, nonatomic) UIView *firstCommentContentBox1;
@property (retain, nonatomic) UIView *firstCommentContentBox2;
@property (retain, nonatomic) UIView *firstRightContent;
@property (retain, nonatomic) UIView *firstImageBox;
@property (retain, nonatomic) UIView *secondCommentBox;
@property (retain, nonatomic) UIView *secondLeftContent;
@property (retain, nonatomic) UIView *secondAvatorView;
@property (retain, nonatomic) UIView *secondAvatorBox;
@property (retain, nonatomic) UIView *secondAvatorInfo;
@property (retain, nonatomic) UIView *secondCommentContentBox1;
@property (retain, nonatomic) UIView *secondCommentContentBox2;
@property (retain, nonatomic) UIView *secondRightContent;
@property (retain, nonatomic) UIView *secondImageBox;
@property (retain, nonatomic) UIView *bottomSplit;
@property (retain, nonatomic) UIImageView *bottomSplitImage;
@property (retain, nonatomic) UIView *bottomContentView;
@property (retain, nonatomic) UILabel *bottomContentTextLabel;
@property (retain, nonatomic) UIImageView *rightArrowImageView;

- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
