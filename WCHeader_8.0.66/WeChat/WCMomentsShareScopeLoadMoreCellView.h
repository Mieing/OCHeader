@class UILabel, CAShapeLayer, UIView;

@interface WCMomentsShareScopeLoadMoreCellView : UICollectionViewCell

@property (retain, nonatomic) UIView *loadMoreTopLineView;
@property (retain, nonatomic) UILabel *loadMoreLabel;
@property (nonatomic) unsigned long long cellViewCurrentCorner;
@property (retain, nonatomic) CAShapeLayer *cellViewCornerMaskLayer;

+ (id)cellIdentifier;
+ (double)cellHeight;
+ (BOOL)isSectionIdentifierEqualsTo:(id)a0;

- (void)loadFromViewModel:(id)a0;
- (void)_initCellViewWithViewModel:(id)a0;
- (void)_initCellViewCornerFromViewModel:(id)a0;
- (void)_removeCellViewCorner;
- (void).cxx_destruct;

@end
