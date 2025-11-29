@class FeedItem, HTSEventContext, UIImageView, UILabel, UIView;
@protocol IESLiveWebPPlayer;

@interface IESLiveFeedAggregateCollectionViewCell : UICollectionViewCell <IESLiveFeedAggregateCollectionViewCellProtocol>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *liveAnimationView;
@property (retain, nonatomic) FeedItem *item;
@property (retain, nonatomic) UIView *aggregateAvatarView;
@property (retain, nonatomic) UIImageView<IESLiveWebPPlayer> *coverDynamicMask;
@property (retain, nonatomic) UIImageView *operationTag;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)trackForShow;
- (void)p_updateCommonCellWithCover:(id)a0 title:(id)a1 name:(id)a2;
- (void)resetSelected:(id)a0 forcedSelectedValue:(id)a1;
- (void)p_setupUI;
- (void)updateWithItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSelected;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)currentItem;

@end
