@class AFDRoundedView, AWEPublishPaymentPreviewItem, UIImageView, DUXSwitch, UILabel, UIView, DUXTip;

@interface AWEPublishPaymentHostingTableViewCell : UICollectionViewCell

@property (retain, nonatomic) AWEPublishPaymentPreviewItem *model;
@property (retain, nonatomic) AFDRoundedView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *titleImageView;
@property (retain, nonatomic) DUXSwitch *switchView;
@property (retain, nonatomic) UIView *descriptionBackgroundView;
@property (retain, nonatomic) DUXTip *tipView;
@property (retain, nonatomic) UILabel *configContentLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (copy, nonatomic) id /* block */ updateSwitchStatus;
@property (nonatomic) unsigned long long cornerType;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)configureUI;
- (void)setupCorners;
- (id)schemaConfigDictionary;
- (void)clickContentLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
