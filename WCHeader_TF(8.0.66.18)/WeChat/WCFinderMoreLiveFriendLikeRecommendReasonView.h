@class NSArray, UIImageView, UILabel, NSMutableArray, UIView;

@interface WCFinderMoreLiveFriendLikeRecommendReasonView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) NSMutableArray *roundHeaderViews;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) NSArray *likeList;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)prepareForReuse;
- (void)updateWithLikeList:(id)a0 dataItem:(id)a1 maxWidth:(double)a2;
- (id)displayLikeList;
- (void)updateLabelContext:(id)a0 displayLikeList:(id)a1 maxWidth:(double)a2;
- (double)maxLabelWidthWithMaxWidth:(double)a0;
- (void)updateWidth;
- (void)layoutSubviews;
- (id)avatorView:(id)a0 headerViewSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
