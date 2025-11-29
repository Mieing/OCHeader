@class WCFinderWCDB;

@interface WCFinderLocalFeedProvider : NSObject

@property (weak, nonatomic) WCFinderWCDB *dataBase;
@property (nonatomic) BOOL isRequesting;

- (id)initWithFinderDB:(id)a0;
- (void)updateLocalBackupFeedArray:(id)a0 commentScene:(int)a1 feedSource:(unsigned long long)a2;
- (void)removeLocalBackupFeedWithTid:(id)a0;
- (void)removeLocalBackupFeedsWithTidArray:(id)a0;
- (void)removeAll;
- (BOOL)hasEnoughValidLocalFeeds:(unsigned long long)a0 pullType:(unsigned long long)a1 commentScene:(int)a2;
- (id)localFeedWithPullType:(unsigned long long)a0 commentScene:(int)a1;
- (id)localFeedArrayWithPullType:(unsigned long long)a0 commentScene:(int)a1 limitCount:(unsigned long long)a2;
- (id)localFeedTidArrayWithPullType:(unsigned long long)a0 commentScene:(int)a1 limitCount:(unsigned long long)a2;
- (void)requestBackupFeedsIfNeeded;
- (void).cxx_destruct;

@end
