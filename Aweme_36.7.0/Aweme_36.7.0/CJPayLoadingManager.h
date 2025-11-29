@class CJPayLoadingStyleInfo, NSMutableDictionary, NSDictionary, CJPayTimerManager, NSString;
@protocol CJPayAdvanceLoadingProtocol;

@interface CJPayLoadingManager : NSObject <CJPayLoadingManagerProtocol>

@property (copy, nonatomic) NSDictionary *loadingTypeMap;
@property (retain, nonatomic) NSMutableDictionary *loadingItemMap;
@property (retain, nonatomic) NSMutableDictionary *loadingCountMap;
@property (retain, nonatomic) NSMutableDictionary *loadingTitleMap;
@property (nonatomic) BOOL isDouyinStyleLoading;
@property (retain, nonatomic) CJPayLoadingStyleInfo *loadingStyleInfo;
@property (retain, nonatomic) CJPayTimerManager *preShowTimerManger;
@property (retain, nonatomic) CJPayTimerManager *payingShowTimerManger;
@property (weak, nonatomic) id<CJPayAdvanceLoadingProtocol> currentLoadingItem;
@property (nonatomic) BOOL isLoadingTitleDowngrade;
@property (nonatomic) double foreignCardLoadingTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultService;

- (void)startLoading:(long long)a0;
- (void)startLoading:(long long)a0 withAttributes:(id)a1;
- (void)startLoading:(long long)a0 title:(id)a1;
- (void)startLoading:(long long)a0 vc:(id)a1;
- (void)hiddenLoadingContainerView;
- (void)startLoading:(long long)a0 isNeedValidateTimer:(BOOL)a1;
- (void)resetLoadingCount:(long long)a0;
- (void)addLoadingCount:(long long)a0;
- (void)addLoadingViewInTopHalfVC;
- (BOOL)p_isSpecialLoadingForUrl:(id)a0;
- (void)stopLoading:(long long)a0 withAttributes:(id)a1;
- (void)stopLoading:(long long)a0 isForce:(BOOL)a1;
- (id)p_getLoadingItemForStop:(long long)a0 isForce:(BOOL)a1;
- (void)p_removeLoadingTitle:(long long)a0;
- (long long)p_tryConvertToBrandLoading:(long long)a0;
- (id)p_getLoadingItemForStop:(long long)a0;
- (id)p_getLoadingItemForStart:(long long)a0;
- (id)p_getLoadingTitle:(long long)a0;
- (void)p_setLoadingTitleWithType:(long long)a0 title:(id)a1;
- (void)p_handleCustomTransitionBeginWithContext:(id)a0;
- (long long)p_isNeedConvertToTopLoading:(long long)a0;
- (long long)p_getRealLoadingTypeWithType:(long long)a0;
- (id)p_createLoadingItem:(long long)a0;
- (BOOL)p_allowStartLoading:(long long)a0;
- (void)p_tryResetTimerWithLoadingType:(long long)a0 loadingItem:(id)a1;
- (id)p_allowStopLoading:(id)a0;
- (void)bringLoadingViewToFrontInWindow:(id)a0;
- (id)getCurrentHalfLoadingView;
- (void)startLoading:(long long)a0 title:(id)a1 logo:(id)a2;
- (void)startLoading:(long long)a0 vc:(id)a1 title:(id)a2;
- (void)startLoading:(long long)a0 withView:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)stopLoading;
- (BOOL)isLoading;
- (void)stopLoading:(long long)a0;
- (void)p_init;

@end
