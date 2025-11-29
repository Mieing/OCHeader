@class NSArray, ACCMVCategoryModel, NSString, AWEVideoPublishViewModel, UIViewController;
@protocol ACCSlidingTabViewControllerProtocol;

@interface ACCMVTemplateTabContentProvider : NSObject <ACCWaterfallTabContentProviderProtocol>

@property (nonatomic) unsigned long long currentSelectedVCIndex;
@property (copy, nonatomic) NSArray *viewControllers;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) ACCMVCategoryModel *defaultCategory;
@property (copy, nonatomic) id /* block */ willEnterDetailVCBlock;
@property (copy, nonatomic) id /* block */ didPickTemplateBlock;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (weak, nonatomic) UIViewController<ACCSlidingTabViewControllerProtocol> *viewController;
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
