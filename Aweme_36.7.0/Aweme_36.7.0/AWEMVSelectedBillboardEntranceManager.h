@interface AWEMVSelectedBillboardEntranceManager : NSObject

+ (BOOL)shouldShowEntranceView;
+ (double)entranceViewHeight;
+ (void)fetchEntranceModelConfigWithCompletion:(id /* block */)a0;
+ (void)trackEntranceViewShownWithModel:(id)a0 referString:(id)a1;
+ (void)requestSelectedBillboardEntranceConfigWithRetryCount:(unsigned long long)a0 completionBlock:(id /* block */)a1;
+ (id)keyWithEntranceModel:(id)a0;
+ (BOOL)didUserClickedViewWithModel:(id)a0;
+ (void)saveUserClickedViewWithModel:(id)a0;
+ (id)trackParamDictForEntranceModel:(id)a0 referString:(id)a1;
+ (BOOL)shouldShowRedPointWithModel:(id)a0;
+ (void)trackEntranceViewClickedWithModel:(id)a0 referString:(id)a1;
+ (BOOL)isCurrentTimeBetweenTimestamp:(double)a0 andMidnightOfNextDayCount:(long long)a1;

@end
