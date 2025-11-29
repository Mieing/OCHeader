@class FTSIndexDynamicConfig;

@interface LocalSearchDynamicConfig : NSObject

@property (nonatomic) unsigned int uiContactActiveDays;
@property (nonatomic) BOOL isUseSilentSort;
@property (nonatomic) BOOL isUseUnReadSort;
@property (nonatomic) unsigned int uiGroupActiveDays;
@property (nonatomic) unsigned int uiGroupMyActiveDays;
@property (nonatomic) unsigned int uiSmallGroupMembers;
@property (nonatomic) BOOL isUseWANetSearch;
@property (nonatomic) BOOL isUseTrainModelSort;
@property (retain, nonatomic) FTSIndexDynamicConfig *ftsIndexDynamic;
@property (nonatomic) BOOL isTopHitContainsWeApp;
@property (nonatomic) BOOL isGlobalSearchOpenPardusSearch;
@property (nonatomic) BOOL isAutoRepairFtsMsgClose;

- (id)init;
- (id)description;
- (void)updateConfigs;
- (void).cxx_destruct;

@end
