@class NSArray, NSString, UIScrollView, NSMutableArray, UIView;

@interface ChatBotHorizontalPageView : UIView <UIScrollViewDelegate>

@property (retain, nonatomic) NSMutableArray *pageInfoArray;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIView *tabContainerView;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) NSArray *tabLabels;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageContentInfos:(id)a1;
- (void)setupPageContent:(id)a0;
- (void)setupTabContainer;
- (void)setupIndicatorView;
- (void)setupScrollView;
- (void)layoutSubviews;
- (void)setupScrollViewSize;
- (void)tabLabelTapped:(id)a0;
- (void)scrollToPage:(long long)a0;
- (void)updateTabLabelsAppearance:(long long)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
