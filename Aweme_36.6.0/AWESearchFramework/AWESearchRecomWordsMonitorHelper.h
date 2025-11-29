@interface AWESearchRecomWordsMonitorHelper : NSObject

+ (void)trackRecomWordsDisplayFailedLogWithReason:(id)a0 awemeId:(id)a1 searchId:(id)a2 docType:(long long)a3;
+ (void)trackRecomWordsShowState:(long long)a0 layoutType:(long long)a1 searchModel:(id)a2 extraParams:(id)a3;
+ (void)trackRecomWordsApiMonitorInfoWithType:(long long)a0 model:(id)a1 extraParams:(id)a2;
+ (long long)getAdStyleTypeWithModel:(id)a0;
+ (void)trackRecomWordsDisplayFailedLogWithReason:(id)a0;
+ (void)toastWithMessage:(id)a0;

@end
