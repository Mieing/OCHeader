@class UIViewController, AWEProfileContext, AWEProfileEventCenter, NSMutableDictionary, AWEProfileServiceCenter;
@protocol AWEUserWorkViewControllerProtocol;

@interface AWEUserWorkContext : AWEPageContext

@property (weak, nonatomic) UIViewController<AWEUserWorkViewControllerProtocol> *viewController;
@property (weak, nonatomic) AWEProfileContext *profileContext;
@property (retain, nonatomic) AWEProfileServiceCenter *serviceCenter;
@property (retain, nonatomic) AWEProfileEventCenter *eventCenter;
@property (retain, nonatomic) NSMutableDictionary *controllerDict;
@property (nonatomic) BOOL customAutoLoadMore;

- (void).cxx_destruct;
- (id)init;

@end
