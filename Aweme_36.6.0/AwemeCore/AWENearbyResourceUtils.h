@interface AWENearbyResourceUtils : NSObject

+ (id)getResourceSceneAndStyleWithModel:(id)a0;
+ (void)creatDialogModelWithResponse:(id)a0 isFromTask:(BOOL)a1 pageType:(long long)a2 completion:(id /* block */)a3;
+ (BOOL)handleContainerModelAvoidType:(id)a0;
+ (void)preCheckShowDialogContainer:(id)a0 isCurrentTabAppear:(BOOL)a1 isFromTask:(BOOL)a2 pageType:(long long)a3 completion:(id /* block */)a4;
+ (BOOL)isDrawCouponOuter;
+ (void)updateOuterDrawCouponFinishTag:(BOOL)a0;
+ (void)updateOuterDrawCouponRequest:(id)a0;
+ (void)updateOuterDrawCouponResponse:(id)a0;
+ (void)updateOuterDrawCouponSuccess:(id)a0;
+ (id)getOuterDrawCouponSuccess;
+ (id)getOuterDrawCouponInfo;
+ (id)getOuterDrawCouponRequest;
+ (BOOL)getOuterDrawCouponFinishTag;
+ (id)grouponCouponFrameWorkOptConfig;
+ (BOOL)isDialogAsyncLoadBg;
+ (BOOL)shouldWaitOtherRequestResponse:(id)a0;
+ (BOOL)handleResponseModelAvoidType:(id)a0;
+ (void)getDialogModelWithResponse:(id)a0 model:(id)a1 pageType:(long long)a2 completion:(id /* block */)a3;
+ (id)handleContentURLWithModel:(id)a0 isContainerVisible:(BOOL)a1 extraParam:(id)a2;
+ (id)addExtraTrackParams:(long long)a0;
+ (id)getDialogContentURLWithCommonData:(id)a0 openSessionID:(id)a1 pageType:(long long)a2;
+ (BOOL)getResourceStyleIsCommonDialogWithModel:(id)a0;
+ (BOOL)getResourceStyleIsBottomBarWithModel:(id)a0;

@end
