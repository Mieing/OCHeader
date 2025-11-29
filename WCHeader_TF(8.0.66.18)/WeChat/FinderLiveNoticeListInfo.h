@class NSString, NSMutableArray;

@interface FinderLiveNoticeListInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *noticeInfo;
@property (nonatomic) unsigned int continueFlag;
@property (nonatomic) unsigned int totalNoticeCnt;
@property (nonatomic) unsigned int totalReservedCnt;
@property (nonatomic) unsigned int continueFlagReverse;
@property (retain, nonatomic) NSString *targetNoticeId;
@property (nonatomic) unsigned int noticeAggregateType;

+ (id)getNormalNoticeListInfoFromNoticeList:(id)a0;
+ (id)getMemberNoticeListInfoFromNoticeList:(id)a0;
+ (id)collectFirstNoticeInfoToListFromNoticeList:(id)a0;
+ (id)mergeNoticeInfoListByTime:(id)a0 withNoticeInfoList:(id)a1;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnTypeForWCDB;
+ (void)initialize;

- (void)setNoticeAggregateType:(unsigned int)a0;
- (unsigned int)noticeAggregateType;
- (void)setTargetNoticeId:(id)a0;
- (id)targetNoticeId;
- (void)setContinueFlagReverse:(unsigned int)a0;
- (unsigned int)continueFlagReverse;
- (void)setTotalReservedCnt:(unsigned int)a0;
- (unsigned int)totalReservedCnt;
- (void)setTotalNoticeCnt:(unsigned int)a0;
- (unsigned int)totalNoticeCnt;
- (void)setContinueFlag:(unsigned int)a0;
- (unsigned int)continueFlag;
- (void)setNoticeInfo:(id)a0;
- (id)noticeInfo;
- (BOOL)appendNextNoticeList:(id)a0 insertedIndexes:(id *)a1;
- (BOOL)prependPreviousNoticeList:(id)a0 insertedIndexes:(id *)a1;
- (void)removeNoticeInfo:(id)a0;
- (void)updateAllNoticeInfosWithReserveStatus:(unsigned long long)a0;
- (void)updateAllNoticeInfosWithReserveStatus:(unsigned long long)a0 excludedNoticeIDs:(id)a1 aggregateTypeArray:(id)a2;
- (void)updateAllNoticeInfosWithReservedNoticeIDs:(id)a0 unreservedNoticeIDs:(id)a1;
- (BOOL)updateNoticeId:(id)a0 withReserveStatus:(unsigned long long)a1;
- (id)noticeListByRemovingNoticeInfo:(id)a0;
- (id)noticeInfoForNoticeId:(id)a0;
- (id)actualFirstNoticeInfo;
- (id)actualLastNoticeInfo;
- (id)archivedWCTValue;

@end
