@class NSArray, NSMutableArray, UIScrollView;
@protocol MMBGMSelectedTabBarViewDelegate;

@interface MMBGMSelectedTabBarView : MMUIView

@property (retain, nonatomic) NSMutableArray *tabButtons;
@property (retain, nonatomic) NSArray *tabBarModels;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (weak, nonatomic) id<MMBGMSelectedTabBarViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tabModel:(id)a1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutBarButton;
- (void)manualTriggerSelectBtnAtIndex:(unsigned long long)a0;
- (void)updateTabButtonState:(long long)a0;
- (void)selectIndex:(unsigned long long)a0;
- (void)tabButtonClicked:(id)a0;
- (void)tabButtonSelectedWithIndex:(long long)a0;
- (void).cxx_destruct;

@end
