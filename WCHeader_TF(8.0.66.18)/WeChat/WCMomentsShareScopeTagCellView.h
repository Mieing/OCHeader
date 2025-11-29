@class CALayer, CAShapeLayer, UILabel, MMImageView, UIView;

@interface WCMomentsShareScopeTagCellView : UICollectionViewCell

@property (retain, nonatomic) UIView *labelContainerView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) MMImageView *arrowIconView;
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
