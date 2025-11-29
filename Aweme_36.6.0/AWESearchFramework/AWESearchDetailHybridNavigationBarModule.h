@class NSString, AWESearchDetailPageNaviBar, UIViewController;

@interface AWESearchDetailHybridNavigationBarModule : AWESearchResultHybridBaseContainerModules <AWESearchHybridInspirationPanelDataSource>

@property (retain, nonatomic) AWESearchDetailPageNaviBar *naviBar;
@property (weak, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
