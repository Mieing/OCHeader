@class NSString, UIWindow;

@interface _AWESKStoreProductControllerDelegate : NSObject <SKStoreProductViewControllerDelegate>

@property (retain, nonatomic) UIWindow *lastKeyWindow;
@property (retain, nonatomic) UIWindow *window;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)productViewControllerDidFinish:(id)a0;
- (void)dealloc;

@end
