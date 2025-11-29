@interface CJPayRetainUtil : NSObject

+ (BOOL)isShowRetainVCWithRetainUtilModel:(id)a0;
+ (BOOL)couldShowLynxRetainVCWithSourceVC:(id)a0 retainUtilModel:(id)a1 completion:(id /* block */)a2;
+ (id)defaultLynxRetainSchema;
+ (BOOL)couldShowRetainVCWithSourceVC:(id)a0 retainUtilModel:(id)a1;
+ (void)showOutRetainVCWithRetainModel:(id)a0;
+ (void)showOutRetainVCWithSourceVC:(id)a0 response:(id)a1 commonTrackParams:(id)a2 defaultShowConfig:(id)a3 extraData:(id)a4 continuePayBlock:(id /* block */)a5 cancelPayBlock:(id /* block */)a6 closePayBlock:(id /* block */)a7 selectPayTypeBlock:(id /* block */)a8;
+ (void)showOutLoginRetainVCWithSourceVC:(id)a0 response:(id)a1 extraParams:(id)a2 continuePayBlock:(id /* block */)a3 cancelPayBlock:(id /* block */)a4 closePayBlock:(id /* block */)a5;
+ (BOOL)couldShowRetainVCWithSourceVC:(id)a0 retainUtilModel:(id)a1 completion:(id /* block */)a2;
+ (void)pushWithSourceVC:(id)a0 targetVC:(id)a1 completion:(id /* block */)a2;
+ (void)p_notifyServerEventWith:(id)a0 retainType:(unsigned long long)a1;
+ (id)p_getRetainTypeStrBy:(unsigned long long)a0;
+ (id)p_getPositionStrBy:(unsigned long long)a0;
+ (void)p_trackRetainVCShowStatusWith:(id)a0 retainType:(id)a1 position:(id)a2 popStyle:(id)a3;
+ (id)p_getAlertCacheKey:(id)a0;
+ (id)p_clientDecisionRetainInfo:(id)a0;
+ (void)p_postNotificationToEveryPosition:(unsigned long long)a0 data:(id)a1;
+ (id)p_buildOutLoginRetainUtilModelWithCreateOrderResponse:(id)a0 sourceVC:(id)a1 extraParams:(id)a2 continuePayBlock:(id /* block */)a3 cancelPayBlock:(id /* block */)a4 closePayBlock:(id /* block */)a5;
+ (BOOL)p_isShowOutRetainVCWithRetainUtilModel:(id)a0;
+ (void)p_trackRetainVCShowStatusWithRetainUtilModel:(id)a0;
+ (void)p_showOutNativeRetainWithRetainUtilModel:(id)a0;
+ (id)p_buildOutRetainUtilModelWithCreateOrderResponse:(id)a0 commonTrackParams:(id)a1 sourceVC:(id)a2 defaultShowConfig:(id)a3 extraData:(id)a4 continuePayBlock:(id /* block */)a5 cancelPayBlock:(id /* block */)a6 closePayBlock:(id /* block */)a7 selectPayTypeBlock:(id /* block */)a8;
+ (void)p_showOutRetainWithRetainUtilModel:(id)a0;
+ (void)p_handleLynxRetainResultWithEventType:(unsigned long long)a0 lynxRetainParams:(id)a1 retainUtilModel:(id)a2;
+ (void)showOutLynxRetainVCWithSourceVC:(id)a0 retainUtilModel:(id)a1 completion:(id /* block */)a2;
+ (void)p_showLynxRetainVCWithSourceVC:(id)a0 retainUtilModel:(id)a1 postFEParams:(id)a2 schema:(id)a3 completion:(id /* block */)a4;
+ (BOOL)needShowRetainPage:(id)a0;

@end
