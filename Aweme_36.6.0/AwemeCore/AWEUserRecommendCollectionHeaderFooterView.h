@class UIView;
@protocol AWEUserRecommendHeaderFooterViewProtocol;

@interface AWEUserRecommendCollectionHeaderFooterView : UICollectionReusableView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) UIView<AWEUserRecommendHeaderFooterViewProtocol> *basicView;

- (void).cxx_destruct;

@end
