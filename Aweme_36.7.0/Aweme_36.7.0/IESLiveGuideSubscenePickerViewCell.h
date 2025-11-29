@class UIImageView, IESLiveGuideSubscenePickerViewConfig, IESLiveGuideSubscenePickerItem, UIView, UILabel;

@interface IESLiveGuideSubscenePickerViewCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveGuideSubscenePickerItem *item;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *iconContainerView;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) IESLiveGuideSubscenePickerViewConfig *pickerConfig;

- (void)p_applyAccessibility:(id)a0;
- (void)updateTitleConstraints;
- (void)updateWithItem:(id)a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupViews;

@end
