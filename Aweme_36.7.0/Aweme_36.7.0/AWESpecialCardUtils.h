@interface AWESpecialCardUtils : NSObject

+ (BOOL)enableStatsRefactor;
+ (BOOL)isSpecialCard:(id)a0;
+ (id)mainCardTypeForModel:(id)a0;
+ (BOOL)enableSpecialCardLargeFontAdapt;
+ (id)cardFrequencyControlID:(id)a0;
+ (BOOL)getClientSubscribeStatusForCard:(id)a0;
+ (BOOL)enableFeedCardAlogOptimize;
+ (BOOL)enableSpecialCardPassBusinessInfo;
+ (BOOL)enableSpecialCardTrackLoadInfo;
+ (BOOL)shouldBlockLargeFontAdaptForBiz:(id)a0;
+ (void)setSubscribe:(BOOL)a0 forCard:(id)a1;
+ (BOOL)enableTransTapStayTimeDurationFix;
+ (BOOL)getServerSubscribeStatusForCard:(id)a0;
+ (unsigned long long)feedCardLocalInsertReverse;

@end
