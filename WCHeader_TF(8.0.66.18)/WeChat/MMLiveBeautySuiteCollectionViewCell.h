@class MMLiveBeautySuite, NSString, UIImageView, MMBadgeView, UILabel, UIView, UIButton;
@protocol MMLiveBeautySuiteCollectionViewCellDelegate;

@interface MMLiveBeautySuiteCollectionViewCell : UICollectionViewCell <MMLiveBeautyBadgeItemExt, MMLiveBeautyBadgeCollectionExt>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) UIView *tileView;
@property (retain, nonatomic) UILabel *displayNameLabel;
@property (retain, nonatomic) UIButton *detailsButton;
@property (retain, nonatomic) UIImageView *detailsChevronView;
@property (retain, nonatomic) MMBadgeView *badgeView;
@property (retain, nonatomic) MMBadgeView *detailsBadgeView;
@property (retain, nonatomic) MMLiveBeautySuite *suite;
@property (weak, nonatomic) id<MMLiveBeautySuiteCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)onDetailsButtonTapped;
- (void)onBeautyBadgeDismissed:(id)a0;
- (void)onActiveBeautyBadgesChangedInCollection:(id)a0;
- (void)layoutSubviews;
- (void)updateWithSuite:(id)a0;
- (void).cxx_destruct;

@end
