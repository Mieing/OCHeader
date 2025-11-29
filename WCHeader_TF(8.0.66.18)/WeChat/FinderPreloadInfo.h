@class FinderPreloadGlobalInfo, NSMutableArray;

@interface FinderPreloadInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long preloadStrategyId;
@property (retain, nonatomic) FinderPreloadGlobalInfo *globalInfo;
@property (retain, nonatomic) NSMutableArray *objectInfo;
@property (retain, nonatomic) NSMutableArray *megavideoInfo;

+ (void)initialize;

@end
