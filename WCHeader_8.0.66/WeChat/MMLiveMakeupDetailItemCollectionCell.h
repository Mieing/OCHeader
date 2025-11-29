@class UIView, MMBadgeView, NSString, MMLiveMakeupDetailDataItem, UIImageView, CAShapeLayer, UIButton, CAGradientLayer, UILabel;

@interface MMLiveMakeupDetailItemCollectionCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt>

@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIButton *coverImageButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *adjustLogo;
@property (retain, nonatomic) MMBadgeView *badgeView;
@property (retain, nonatomic) MMLiveMakeupDetailDataItem *dataItem;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL hasAdjust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)fitTitleLabel;
- (void)onBeautyBadgeDismissed:(id)a0;
- (void).cxx_destruct;

@end
