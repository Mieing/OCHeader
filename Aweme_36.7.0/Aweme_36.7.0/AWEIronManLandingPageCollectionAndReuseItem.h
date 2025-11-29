@class UILongPressGestureRecognizer, AWEIronManLandingPageCommonItemModel, UIImageView, UILabel, UIButton;
@protocol AWEIronManLandingPageItemInteractionDelegate;

@interface AWEIronManLandingPageCollectionAndReuseItem : UICollectionViewCell

@property (retain, nonatomic) UIButton *bgBtn;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILongPressGestureRecognizer *press;
@property (retain, nonatomic) AWEIronManLandingPageCommonItemModel *model;
@property (weak, nonatomic) id<AWEIronManLandingPageItemInteractionDelegate> delegate;
@property (nonatomic) long long index;

- (void)awe_themeDidChange:(long long)a0;
- (void)clickAction;
- (void)deliverActionToDelegate:(unsigned long long)a0;
- (void)updateToItemModel:(id)a0;
- (void)longPress:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
