@class NSLock, NSObject, CJPayTimestampSyncInfo;
@protocol OS_dispatch_queue;

@interface CJPayTimestampSyncManager : NSObject

@property (retain, nonatomic) CJPayTimestampSyncInfo *info;
@property (nonatomic) double offset;
@property (nonatomic) double offsetLocal;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) unsigned long long status;
@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)shared;

- (double)getSystemUpTime;
- (void)syncWithInfo:(id)a0;
- (void)loadCurrSyncInfo;
- (void)saveCurrSyncInfo;
- (void)trackFluctuationWithLastSyncInfo:(id)a0 currSyncInfo:(id)a1 isFirstSync:(BOOL)a2;
- (void)trackNoSync;
- (double)getSystemStartTimestamp;
- (unsigned long long)currentStatus;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isExpired;
- (double)currentTimestamp;

@end
