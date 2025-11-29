@class MMLiveGradientLayerView, UIImageView, MMFinderLiveRealNameFriendLikeNotificationMsg, UILabel, NSMutableArray, UIView;

@interface MMFinderLiveRealNameFriendLikeNotificationView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *avatarContainerView;
@property (retain, nonatomic) NSMutableArray *roundHeaderViews;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIImageView *likeIconView;
@property (retain, nonatomic) MMLiveGradientLayerView *bgGradientView;
@property (retain, nonatomic) MMFinderLiveRealNameFriendLikeNotificationMsg *notification;

+ (id)displayContent:(id)a0 maxWidth:(double)a1;
+ (struct CGSize { double x0; double x1; })sizeWithNotification:(id)a0 maxWidth:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)updateWithNotification:(id)a0 dataItem:(id)a1;
- (double)maxLabelWidthWithMaxWidth:(double)a0;
- (void)layoutSubviews;
- (id)avatorView:(id)a0 headerViewSize:(struct CGSize { double x0; double x1; })a1;
- (void).cxx_destruct;

@end
