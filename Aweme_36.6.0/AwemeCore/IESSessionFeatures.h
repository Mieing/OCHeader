@class NSString, NSMutableDictionary, AWEStorage, NSMutableArray, NSLock;

@interface IESSessionFeatures : NSObject

@property (retain, nonatomic) NSMutableDictionary *sessionHistoryDic;
@property (retain, nonatomic) NSMutableArray *sessionHistoryList;
@property (retain, nonatomic) NSMutableDictionary *secToSessionDic;
@property (retain, nonatomic) NSMutableDictionary *aidToSessionqDic;
@property (nonatomic) long long maxHistoryCount;
@property (nonatomic) long long sessionRank;
@property (retain, nonatomic) NSString *currentSessionID;
@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) NSLock *historyLock;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1;
- (void)loadHistory;
- (long long)getLastSeqPlayInfoIndex:(BOOL)a0;
- (void)saveHistory;
- (void)trackPlayWithRequestID:(id)a0 AID:(id)a1 sessionID:(id)a2;
- (void)trackPlayTime:(id)a0 withAID:(id)a1;
- (void)removeFirstSessionInHistoryList;
- (id)getOrCreateHistoryWithSessionID:(id)a0;
- (id)getSessionInfoByAID:(id)a0;
- (BOOL)isNewSequence:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
