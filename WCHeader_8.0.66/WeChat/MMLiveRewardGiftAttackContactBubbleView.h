@class NSArray, MMFinderLiveRewardGiftItem, MMFinderLiveTask, UIImageView, MMCPLabel, MMFinderLiveTaskId, MMUILabel, NSIndexPath;

@interface MMLiveRewardGiftAttackContactBubbleView : MMRectTriangleArrowView

@property (retain, nonatomic) MMFinderLiveRewardGiftItem *giftItem;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (readonly, nonatomic) MMFinderLiveTask *finderLiveTask;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) NSArray *curGiftAttackContacts;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) NSArray *giftAttackContactHeadImageViews;
@property (retain, nonatomic) MMCPLabel *firstGiftAttackContactNickNameLabel;
@property (retain, nonatomic) UIImageView *selectContactArrowIconView;
@property (copy, nonatomic) id /* block */ tapAction;

+ (double)GetEstimateWidth:(unsigned long long)a0;
+ (double)GetEstimateHeight;

- (id)initWithTaskId:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(long long)a2;
- (void)initUI;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)removeGiftAttackContactHeaderViews;
- (double)triangeArrowWidth;
- (double)triangeArrowHeight;
- (double)selfCornerRadius;
- (void)updateWithGiftAttackContacts:(id)a0;
- (void)handleTapGestureRecognizer:(id)a0;
- (void).cxx_destruct;

@end
