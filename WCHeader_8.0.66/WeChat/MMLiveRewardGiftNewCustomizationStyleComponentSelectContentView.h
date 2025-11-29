@class MMFinderLiveNewCustomGiftComponent, MMLiveRewardGiftNewCustomizationComponentTagView, UIScrollView, NSMutableArray;

@interface MMLiveRewardGiftNewCustomizationStyleComponentSelectContentView : MMLiveRewardGiftNewCustomizationStyleSelectContentView

@property (retain, nonatomic) MMFinderLiveNewCustomGiftComponent *component;
@property (retain, nonatomic) UIScrollView *componentContainerView;
@property (retain, nonatomic) NSMutableArray *componentTagViewList;
@property (weak, nonatomic) MMLiveRewardGiftNewCustomizationComponentTagView *currSelectComponentTagView;

- (id)initWithComponent:(id)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createComponentTagContainerView;
- (double)componentContainerLeftInset;
- (void)createComponentTagViews;
- (id)createComponentTagView:(id)a0;
- (void)layoutComponentTagContainerView;
- (void)layoutComponentTagViews;
- (void)updateComponentTagContainerContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)initSelectState;
- (void)initContentMode;
- (id)getComponentTagViewWithKey:(id)a0;
- (void)onCurrentSelectComponentKeyChanged;
- (id)styleObj;
- (void).cxx_destruct;

@end
