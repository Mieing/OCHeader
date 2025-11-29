@interface AWEInteractNoticeModularizationUtils : NSObject

+ (id)hexStringFromString:(id)a0;
+ (void)prepareModularizationNotices:(id)a0 isRefresh:(BOOL)a1;
+ (void)preprocessModularizationNotice:(id)a0;
+ (void)removeOverduedTodayInThePastNotices:(id)a0 isRefresh:(BOOL)a1;
+ (id)getNewInteractCellStyleDeleteAttStrWithStr:(id)a0;
+ (id)getNewInteractCellStyleSupplementAttStrWithTime:(id)a0 withSupplement:(id)a1;
+ (void)removeOverdueTodayInThePastNotices:(id)a0;

@end
