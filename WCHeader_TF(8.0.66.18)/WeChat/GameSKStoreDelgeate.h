@class NSString, UIViewController, SKStoreProductViewController;

@interface GameSKStoreDelgeate : NSObject <SKStoreProductViewControllerDelegate>

@property (nonatomic) BOOL storePageShow;
@property (copy, nonatomic) id /* block */ onCloseBlock;
@property (weak, nonatomic) SKStoreProductViewController *storeVc;
@property (nonatomic) BOOL popWhenDismiss;
@property (retain, nonatomic) UIViewController *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithOnCloseBlock:(id /* block */)a0 storeVc:(id)a1;
- (void)dealloc;
- (void)productViewControllerDidFinish:(id)a0;
- (void)dismissCurrentStorePage;
- (void)popTopViewController;
- (void)onClose;
- (void).cxx_destruct;

@end
