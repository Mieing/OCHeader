@class BDXViewController;
@protocol IESHYControllerDelegate, BDXPageContainerProtocol;

@interface AnniePageExtensionBasedOnBDX : NSObject

@property (weak, nonatomic) BDXViewController<BDXPageContainerProtocol> *bdxViewController;
@property (nonatomic) BOOL hasClosed;
@property (weak, nonatomic) id<IESHYControllerDelegate> delegate;

- (void)closeHybridWithCompletion:(id /* block */)a0;
- (unsigned long long)anniexViewType;
- (void)updateStatusBarBackgroundColor:(id)a0;
- (void)updateStatusBarStyle:(long long)a0;
- (void)updateNavigationBarColor:(id)a0;
- (void)updateTitleColor:(id)a0;
- (void)setWebViewBounceEnable:(BOOL)a0;
- (void)setNavigationSwipeBackEnable:(BOOL)a0;
- (id)initWithBDXViewController:(id)a0;
- (void).cxx_destruct;
- (void)setStatusBarHidden:(BOOL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (id)getDelegate;

@end
