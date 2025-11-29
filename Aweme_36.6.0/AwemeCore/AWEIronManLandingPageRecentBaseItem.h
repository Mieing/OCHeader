@class AWEIronManLandingPageDeepRelationItemModel, UIImageView, UIView, UILabel, UIButton;
@protocol AWEIronManLandingPageItemInteractionDelegate;

@interface AWEIronManLandingPageRecentBaseItem : UICollectionViewCell

@property (retain, nonatomic) UIButton *bgBtn;
@property (retain, nonatomic) UIView *headView;
@property (retain, nonatomic) UIImageView *appIconView;
@property (retain, nonatomic) UILabel *appNameLabel;
@property (retain, nonatomic) UIView *infoView;
@property (weak, nonatomic) id<AWEIronManLandingPageItemInteractionDelegate> delegate;
@property (retain, nonatomic) AWEIronManLandingPageDeepRelationItemModel *itemModel;
@property (nonatomic) long long index;

- (void)clickAction;
- (void)updateToItemModel:(id)a0;
- (void).cxx_destruct;
- (void)setUpUI;

@end
