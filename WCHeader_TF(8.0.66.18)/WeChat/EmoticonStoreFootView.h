@class UILabel, MMUIActivityIndicatorView;

@interface EmoticonStoreFootView : MMRefreshTableFooterView

@property (retain, nonatomic) MMUIActivityIndicatorView *m_activityIndicatorView;
@property (retain, nonatomic) UILabel *m_label;
@property (nonatomic) unsigned int m_lineViewWidth;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;
- (void)layoutSubviews;
- (void)onStateOfNormal;
- (void)onStateOfLoading;
- (void)onStateOfNoMoreData:(id)a0;
- (void)onStateOfNoData:(id)a0;
- (void).cxx_destruct;

@end
