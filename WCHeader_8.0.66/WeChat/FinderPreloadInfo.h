@class FinderPreloadGlobalInfo, NSMutableArray;

@interface FinderPreloadInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long preloadStrategyId;
@property (retain, nonatomic) FinderPreloadGlobalInfo *globalInfo;
@property (retain, nonatomic) NSMutableArray *objectInfo;
@property (retain, nonatomic) NSMutableArray *megavideoInfo;

+ (void)initialize;

- (void)setMegavideoInfo:(id)a0;
- (id)megavideoInfo;
- (void)setObjectInfo:(id)a0;
- (id)objectInfo;
- (void)setGlobalInfo:(id)a0;
- (id)globalInfo;
- (void)setPreloadStrategyId:(unsigned long long)a0;
- (unsigned long long)preloadStrategyId;

@end
