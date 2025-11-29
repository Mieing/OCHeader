@class ACCAIGCCategoryModel, NSArray, NSString, AWEVideoPublishViewModel, UIViewController;
@protocol ACCAIGCSlidingTabViewControllerProtocol;

@interface ACCAIGCTemplateTabContentProvider : NSObject <ACCAIGCWaterfallTabContentProviderProtocol>

@property (nonatomic) unsigned long long currentSelectedVCIndex;
@property (copy, nonatomic) NSArray *viewControllers;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) NSArray *categories;
@property (retain, nonatomic) ACCAIGCCategoryModel *defaultCategory;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) id /* block */ creatAIGCBlock;
@property (copy, nonatomic) id /* block */ takeSameBlock;
@property (weak, nonatomic) UIViewController<ACCAIGCSlidingTabViewControllerProtocol> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)slidingViewController:(id)a0 didSelectIndex:(long long)a1;
- (id)slidingViewControllers;
- (id)acc_zoomTransitionStartViewForItemOffset:(long long)a0;
- (id)tabTitlesArray;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)initialSelectedIndex;

@end
