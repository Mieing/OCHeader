@interface RingToneSession : NSObject

+ (id)fillUpFinderItemWithRing:(id)a0 useCache:(BOOL)a1;
+ (id)fetchHistoryRingsWithSeq:(unsigned long long)a0;
+ (id)clearHistoryRings;
+ (id)deleteHistoryRing:(id)a0;
+ (id)fetchRecommendRingsWithOffset:(unsigned int)a0 ring:(id)a1 pullType:(unsigned long long)a2;
+ (id)ReportRingBackForRecommend:(id)a0;
+ (id)GetRingBackDetailByFinderItem:(id)a0;
+ (id)genRingBackDetailSubRequestPB:(id)a0;
+ (void)jumpToFinderPlayer:(id)a0 ring:(id)a1 userName:(id)a2 pageSheetFlag:(unsigned long long)a3 extraInfo:(id)a4;
+ (void)jumpToAuthorPage:(id)a0 ring:(id)a1;
+ (void)finderAuthorPage:(id)a0 ring:(id)a1 userName:(id)a2;
+ (unsigned long long)getRingToneSetType:(id)a0;
+ (id)getReportExtraInfo:(id)a0 position:(long long)a1 searchID:(unsigned long long)a2;
+ (id)searchMusicRingWithQuery:(id)a0 offset:(unsigned int)a1 searchID:(unsigned long long)a2;
+ (void)prefetchDataForCell:(id)a0;
+ (id)genRingTongExpParamFromClientPB:(unsigned int)a0 isNewVersion:(unsigned int)a1;
+ (id)genRingSearchUDF:(unsigned int)a0;
+ (id)RingBackSearchWordSuggest:(id)a0;
+ (id)SendRingBackToListen:(id)a0 cliMinSeq:(unsigned long long)a1 totalScanRingBackCount:(unsigned long long)a2 totalSendRingBackCount:(unsigned long long)a3 categoryID:(id)a4;

@end
