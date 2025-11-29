@class UIView, MMBadgeView, MMLiveMakeupDataItem, NSString, CAShapeLayer, UIImageView, UIButton, CAGradientLayer, MMUILabel, UILabel;
@protocol MMLiveMakeupItemCollectionCellDelegate;

@interface MMLiveMakeupItemCollectionCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt, MMLiveBeautyBadgeCollectionExt>

@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIView *imageBackgroundView;
@property (retain, nonatomic) UIButton *coverImageButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIView *adjustLogo;
@property (retain, nonatomic) UIView *changeDetailContainer;
@property (retain, nonatomic) MMUILabel *changeDetailLabel;
@property (retain, nonatomic) UIImageView *changeDetailImage;
@property (retain, nonatomic) MMBadgeView *badgeView;
@property (retain, nonatomic) MMBadgeView *detailsBadgeView;
@property (retain, nonatomic) MMLiveMakeupDataItem *dataItem;
@property (nonatomic) BOOL isSelected;
@property (weak, nonatomic) id<MMLiveMakeupItemCollectionCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })getCellSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)initBaseView;
- (void)initChangeDetailContainerView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)fitTitleLabel;
- (void)onTappedChangeDetailLabel;
- (void)onBeautyBadgeDismissed:(id)a0;
- (void)onActiveBeautyBadgesChangedInCollection:(id)a0;
- (void).cxx_destruct;

@end
