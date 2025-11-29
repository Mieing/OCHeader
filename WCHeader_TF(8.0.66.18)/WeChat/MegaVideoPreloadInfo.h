@class MegaVideoPreloadGlobalInfo, NSMutableArray;

@interface MegaVideoPreloadInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long preloadStrategyId;
@property (retain, nonatomic) MegaVideoPreloadGlobalInfo *globalInfo;
@property (retain, nonatomic) NSMutableArray *objectInfo;

+ (void)initialize;

@end
