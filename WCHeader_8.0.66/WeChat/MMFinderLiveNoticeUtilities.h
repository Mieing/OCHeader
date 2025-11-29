@interface MMFinderLiveNoticeUtilities : NSObject

+ (BOOL)updateNoticeInfo:(id)a0 withReserveStatus:(unsigned long long)a1 byMatchingNoticeId:(id)a2;
+ (BOOL)updateNoticeList:(id)a0 withReserveStatus:(unsigned long long)a1 aggregateTypeArray:(id)a2 byMatchingNoticeIds:(id)a3;
+ (BOOL)updateNoticeInfo:(id)a0 noticeList:(id)a1 withNoticeId:(id)a2 hasPurchase:(BOOL)a3;
+ (BOOL)updateNoticeInfo:(id)a0 noticeList:(id)a1 withNoticeId:(id)a2 isTop:(BOOL)a3;
+ (BOOL)updateNoticeInfo:(id)a0 noticeList:(id)a1 withReserveStatus:(unsigned long long)a2 opType:(unsigned long long)a3 changedNoticeIds:(id)a4 failureNoticeIds:(id)a5 aggregateTypeArray:(id)a6;
+ (void)setupProfileParams:(id)a0 fromProfileURLString:(id)a1;

@end
