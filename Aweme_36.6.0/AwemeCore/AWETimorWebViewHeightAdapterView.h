@protocol AWETimorWebViewHeightAdapterViewDelegate;

@interface AWETimorWebViewHeightAdapterView : UIView

@property (weak, nonatomic) id<AWETimorWebViewHeightAdapterViewDelegate> heightAdapterViewDelegate;

- (void)updateNavigationBarConstraintFrame;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupView;

@end
