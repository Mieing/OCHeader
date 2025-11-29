@class NSString;

@interface BDPOrderCommentServiceImpl : NSObject <BDPOrderCommentInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)initService;
- (void)showOrderCommentIfNeed:(id)a0 userId:(id)a1 uniqueId:(id)a2 parentView:(id)a3 dismissBlock:(id /* block */)a4;
- (BOOL)_shouldShowOrderCommentGuideWithUserId:(id)a0;
- (void)_showOrderCommentGuideWithOrderData:(id)a0 userId:(id)a1 uniqueId:(id)a2 parentView:(id)a3 dismissBlock:(id /* block */)a4;
- (void)_getCanCommentOrderWithOrderId:(id)a0 appId:(id)a1 uniqueId:(id)a2 completion:(id /* block */)a3;
- (BOOL)_shouldShowOrderCommnetGuideWithOrderId:(id)a0 canoCommentTime:(long long)a1 uniqueId:(id)a2;
- (id)_getCanCommentOrderWithOrderList:(id)a0 uniqueId:(id)a1 count:(long long)a2;
- (void)_updateOrderCommentFrequencyControlWithOrderId:(id)a0 uniqueId:(id)a1;
- (void)_updateUserFrequencyWithUserId:(id)a0;
- (id)_userOrderStartTimeKeyWithUserId:(id)a0;
- (id)_userOrderCloseCountKeyWithUserId:(id)a0;
- (id)_orderCommentKeyWithOrderId:(id)a0;

@end
