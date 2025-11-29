@class NSString, NSMutableArray;
@protocol BDXDisableSwipeServiceProtocol;

@interface BDXPopupContainerService : NSObject <BDXPopupContainerServiceProtocol>

@property (readonly, nonatomic) NSMutableArray *stack;
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
- (id /* block */)completeWithAnimationBlockConfig:(id)a0;
- (id)popupWithContainerID:(id)a0;
- (void)closePopup:(id)a0 animated:(BOOL)a1 params:(id)a2 completion:(id /* block */)a3;
- (void)clearPopup:(id)a0;
- (void)closePopup:(id)a0 animated:(BOOL)a1 params:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
