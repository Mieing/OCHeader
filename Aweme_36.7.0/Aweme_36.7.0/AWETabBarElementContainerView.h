@class UIScrollView, NSMutableArray, NSArray;

@interface AWETabBarElementContainerView : UIView

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) NSMutableArray *elementButtons;
@property (copy, nonatomic) NSArray *elementButtonViewModels;
@property (nonatomic) double lightProgress;
@property (nonatomic) BOOL isFold;
@property (nonatomic) unsigned long long elementAlignment;

- (void)updateLightModeWithProgress:(double)a0;
- (void)p_refreshLayout;
- (void)changeFoldState:(BOOL)a0;
- (void)updateElementButtonViewModels:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
