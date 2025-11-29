@interface IESECRelationABTestManager : NSObject

+ (id)relationHostsPreconnectConfig;
+ (id)relationApiHostsPreconnectConfig;
+ (id)relationPicHostsPreconnectConfig;
+ (id)ecomLiveTransParams;
+ (id)ecomLiveDelParams;
+ (BOOL)enableSearchCamera;
+ (long long)shopSKUFrequency;
+ (BOOL)enablePuzzleMigrateToAnnieX;
+ (id)windowImagePreloadConfig;
+ (BOOL)enableWindowImagePreload;
+ (BOOL)enableWindowTabUseSmileCurve;
+ (long long)windowImagePreloadFirstScreenNum;
+ (long long)windowImagePreloadLoadMoreNum;
+ (BOOL)enableWindowHeaderScale;
+ (BOOL)enableWindowFeedScale;
+ (BOOL)windowSearchUseNewAPI;
+ (BOOL)windowSearchUseSearchEngine;
+ (BOOL)showWinHotSaleVane;
+ (BOOL)showWinGuessYouLikeVane;
+ (long long)winHotSaleInsertCardIndex;
+ (BOOL)windowVaneShowAllTab;

@end
