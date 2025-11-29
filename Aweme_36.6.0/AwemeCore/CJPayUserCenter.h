@class NSString, CJPayFullPageBaseViewController;
@protocol CJPayAPIDelegate;

@interface CJPayUserCenter : NSObject <CJPayUserCenterModule>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) CJPayFullPageBaseViewController *deskVC;
@property (weak, nonatomic) id<CJPayAPIDelegate> apiDelegate;
@property (nonatomic) BOOL isNewStyle;

+ (void)registerComponents;
+ (id)sharedInstance;

- (void)closePage;
- (BOOL)openPath:(id)a0 withParams:(id)a1;
- (void)i_openNativeBalanceWithdrawDeskWithParams:(id)a0 delegate:(id)a1;
- (void)i_openNativeBalanceRechargeDeskWithParams:(id)a0 delegate:(id)a1;
- (void)rechargeBalance:(id)a0 completion:(id /* block */)a1;
- (void)withdrawBalance:(id)a0 completion:(id /* block */)a1;
- (void)p_handleBindCardConflictReturn;
- (void)p_openH5BalanceRechargeDeskWithParams:(id)a0 delegate:(id)a1;
- (void)p_openNativeBalanceRechargeDeskWithParams:(id)a0 delegate:(id)a1;
- (void)p_openH5BalanceWithdrawDeskWithParams:(id)a0 delegate:(id)a1;
- (void)p_openNativeBalanceWithdrawDeskWithParams:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
