@class NSArray;

@interface AWEMRSubscribeMultiCategoryPanelView : AWEMRSubscribeBasePanelView

@property (nonatomic) long long switchCount;
@property (copy, nonatomic) NSArray *optionViews;

- (double)containerViewTopInset;
- (double)containerViewBottomInset;
- (id)initWithSwitchCount:(long long)a0;
- (void)setupContainerView;
- (void).cxx_destruct;

@end
