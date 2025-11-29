@class UIViewController;
@protocol AWERelationSheetSectionContainer;

@interface AWERelationSheetBaseSection : NSObject

@property (weak, nonatomic) UIViewController<AWERelationSheetSectionContainer> *viewController;

- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)commitChanges:(id /* block */)a0;
- (void)sectionViewDidLoad;
- (void)goNextTextField;
- (void).cxx_destruct;
- (id)textField;
- (id)sectionView;
- (double)bottomSpacing;
- (void)viewControllerWillAppear:(BOOL)a0;
- (void)viewControllerWillDisappear:(BOOL)a0;

@end
