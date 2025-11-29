@class NSString, UIViewController, AWEAwemeModel;
@protocol AWEPlayInteractionViewControllerProtocol, AWECommerceDispatcherManager;

@interface AWECommerceComponentContext : NSObject <AWECommerceComponentContext>

@property (weak, nonatomic) UIViewController<AWEPlayInteractionViewControllerProtocol> *container;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWECommerceDispatcherManager> dispatchManager;
@property (copy, nonatomic) id /* block */ isSimilarRecommendViewShowing;
@property (copy, nonatomic) id /* block */ adOperationGuideShowing;
@property (copy, nonatomic) id /* block */ hideLeftContainer;
@property (copy, nonatomic) id /* block */ promptModalManager;
@property (copy, nonatomic) id /* block */ commerceViewModel;
@property (copy, nonatomic) id /* block */ similarAdManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
