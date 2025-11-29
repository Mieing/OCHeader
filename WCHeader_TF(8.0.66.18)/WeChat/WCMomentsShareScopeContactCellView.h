@class CALayer, CAShapeLayer, UILabel, UIView, MMHeadImageView;

@interface WCMomentsShareScopeContactCellView : UICollectionViewCell

@property (retain, nonatomic) MMHeadImageView *avatarImageView;
@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (nonatomic) unsigned long long cellViewCurrentCorner;
@property (retain, nonatomic) CAShapeLayer *cellViewCornerMaskLayer;
@property (retain, nonatomic) CALayer *labelContainerViewBorderLayer;

+ (id)cellIdentifier;
+ (double)cellHeight;
+ (BOOL)isSectionIdentifierEqualsTo:(id)a0;

- (void)loadFromViewModel:(id)a0;
- (void)_initCellViewWithViewModel:(id)a0;
- (void)_initCellViewCornerFromViewModel:(id)a0;
- (void)_removeCellViewCorner;
- (void)_initContainerViewBorderFromViewModel:(id)a0;
- (void).cxx_destruct;

@end
