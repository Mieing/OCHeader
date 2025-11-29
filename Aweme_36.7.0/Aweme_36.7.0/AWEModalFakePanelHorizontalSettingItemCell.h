@class UIImageView, AWEPlayInteractionLongPressModalFakePanelItem, UILabel, UIView;

@interface AWEModalFakePanelHorizontalSettingItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *buttonIcon;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (retain, nonatomic) UILabel *buttonView;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) AWEPlayInteractionLongPressModalFakePanelItem *itemModel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)updateUI:(id)a0;

@end
