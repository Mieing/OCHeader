@class BDXPopupViewController;
@protocol BDXPopupContainerProtocol, IESHYControllerDelegate;

@interface AnniePopupExtensionBasedOnBDX : NSObject

@property (weak, nonatomic) BDXPopupViewController<BDXPopupContainerProtocol> *bdxViewController;
@property (weak, nonatomic) id<IESHYControllerDelegate> delegate;
@property (nonatomic) BOOL isClose;

- (void)closeHybridWithCompletion:(id /* block */)a0;
- (unsigned long long)anniexViewType;
- (void)setCloseByClickMaskEnable:(BOOL)a0;
- (void)setCloseByGestureEnbale:(BOOL)a0;
- (id)initWithBDXViewController:(id)a0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)a0;
- (id)getDelegate;

@end
