@class UIStackView, UIView, AWEAwemeModel, NSString, AWETeenFeedDoubleColumnViewController, UIImageView, LOTAnimationView, UILabel;

@interface AWETeenFeedDoubleColumnCollectionViewCell : UICollectionViewCell <AWETeenSubscribeMessage, AWETeenCollectMessage>

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIImageView *failedImageView;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UIImageView *authorThumbView;
@property (retain, nonatomic) UIImageView *likeIcon;
@property (retain, nonatomic) UILabel *likeNumberLabel;
@property (retain, nonatomic) UIView *authorAndLikeContainerView;
@property (retain, nonatomic) UIView *likeInteractionView;
@property (retain, nonatomic) UIView *authorInteractionView;
@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UIImageView *collectionIcon;
@property (retain, nonatomic) UIView *recommendTagContainerView;
@property (retain, nonatomic) UIImageView *subscribeIconView;
@property (retain, nonatomic) UILabel *subscribeLabel;
@property (retain, nonatomic) LOTAnimationView *likeAnimationView;
@property (nonatomic) BOOL isDigging;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) AWETeenFeedDoubleColumnViewController *doubleColumnVC;
@property (nonatomic) long long showOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithModel:(id)a0;
- (id)coverImageViewBackgroundColor;
- (void)p_setupViews;
- (void)p_setupConstraints;
- (void)p_addNotification;
- (void)didUpdateSubscribeStatus:(long long)a0 secUserID:(id)a1;
- (void)p_onAwemeDiggNotification:(id)a0;
- (void)didFinishCollectWithItemID:(id)a0 actionType:(unsigned long long)a1 collectCount:(id)a2;
- (void)p_setupTitleLabelText:(id)a0;
- (void)p_addBindObserver;
- (void)p_loadCoverImageView;
- (void)p_loadAuthorThumbView;
- (id)collectionViewCellBackgroundColor;
- (void)p_setLikeLabelString;
- (void)p_updateLikeIcon:(BOOL)a0;
- (void)enterAuthorPage;
- (void)p_likeActionWithAnimation:(BOOL)a0;
- (void)p_trackSquareLike:(BOOL)a0;
- (void)p_likeAnimationWithStatus:(BOOL)a0 requestFailed:(BOOL)a1 animated:(BOOL)a2;
- (id)authorThumbViewBackgroundColor;
- (id)authorNameLabelColor;
- (id)likeNameLabelColor;
- (void)tapLikeIcon:(id)a0;
- (void)tapAuthorThumbView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)titleLabelColor;

@end
