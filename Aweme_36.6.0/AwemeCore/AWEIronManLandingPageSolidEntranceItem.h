@class AWEIronManLandingPageSolidEntranceItemModel, UIImageView, UILabel, MASConstraint, UIButton;
@protocol AWEIronManLandingPageItemInteractionDelegate;

@interface AWEIronManLandingPageSolidEntranceItem : UICollectionViewCell

@property (retain, nonatomic) UIButton *bgBtn;
@property (retain, nonatomic) UIImageView *entranceIconView;
@property (retain, nonatomic) UILabel *entranceTitleLabel;
@property (retain, nonatomic) UILabel *badgeLabel;
@property (retain, nonatomic) MASConstraint *widthCons;
@property (retain, nonatomic) MASConstraint *badgeCons;
@property (retain, nonatomic) AWEIronManLandingPageSolidEntranceItemModel *itemModel;
@property (weak, nonatomic) id<AWEIronManLandingPageItemInteractionDelegate> delegate;

- (void)awe_themeDidChange:(long long)a0;
- (void)clickAction;
- (void)updateToItemModel:(id)a0;
- (void)updateBtnWidth;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
