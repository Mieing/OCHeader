@class BDASifContainerLifecycle, UIViewController, NSString, BDASifConfiguration;
@protocol BDXPopupContainerServiceProtocol, BDASifLifecycleDelegate, BDXDisableSwipeServiceProtocol, BDXPopupContainerProtocol;

@interface BDASifPopupContainerService : NSObject <BDXPopupContainerServiceProtocol>

@property (retain, nonatomic) id<BDXPopupContainerServiceProtocol> defaultService;
@property (retain, nonatomic) BDASifConfiguration *sifConfig;
@property (retain, nonatomic) BDASifContainerLifecycle *sifLifecycle;
@property (weak, nonatomic) id<BDASifLifecycleDelegate> sifLifecycleDelegate;
@property (weak, nonatomic) UIViewController<BDXPopupContainerProtocol> *popupViewController;
@property (retain, nonatomic) id<BDXDisableSwipeServiceProtocol> disableSwipeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (unsigned long long)serviceType;

- (id)create:(id)a0 context:(id)a1;
- (id)open:(id)a0 context:(id)a1;
- (void)closePopup:(id)a0 animated:(BOOL)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)clearPopup:(id)a0;
- (void).cxx_destruct;

@end
