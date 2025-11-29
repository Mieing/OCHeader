@class UIView;
@protocol AWEUserRecommendHeaderFooterViewProtocol;

@interface AWEUserRecommendTableHeaderFooterView : UITableViewHeaderFooterView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) UIView<AWEUserRecommendHeaderFooterViewProtocol> *basicView;

- (void).cxx_destruct;

@end
