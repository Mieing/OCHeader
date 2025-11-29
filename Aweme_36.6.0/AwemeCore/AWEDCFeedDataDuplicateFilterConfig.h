@class NSSet;

@interface AWEDCFeedDataDuplicateFilterConfig : AWEDCFeedBaseConfig

@property (copy, nonatomic) id /* block */ customFilterLevelBlock;
@property (copy, nonatomic) id /* block */ onDidFilterBlock;
@property (nonatomic) BOOL refreshNeedReset;
@property (retain, nonatomic) NSSet *excludeAwemeType;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
