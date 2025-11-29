@class NSMutableDictionary, NSString, AWEStorage, NSLock, NSMutableArray;

@interface IESSeqPlayFeatures : NSObject

@property (retain, nonatomic) NSMutableDictionary *seqPlayHistoryDic;
@property (retain, nonatomic) NSMutableArray *seqPlayHistoryList;
@property (retain, nonatomic) NSMutableDictionary *aidToSeqDic;
@property (nonatomic) long long maxHistoryCount;
@property (retain, nonatomic) NSLock *historyLock;
@property (nonatomic) long long seqCount;
@property (retain, nonatomic) NSString *currentSeqID;
@property (retain, nonatomic) AWEStorage *storage;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1;
- (void)loadHistory;
- (void)removeFirstItemInSeqHistoryList;
- (id)getOrCreateHistoryWithSeqID:(id)a0;
- (id)getSeqPlayInfoByAID:(id)a0;
- (long long)getLastSeqPlayInfoIndex:(BOOL)a0;
- (BOOL)isNewSequenceID:(id)a0;
- (void)saveHistory;
- (void)trackPlayWithRequestID:(id)a0 AID:(id)a1 sessionID:(id)a2;
- (void)trackPlayTime:(id)a0 withAID:(id)a1;
- (void)trackClickCommentButtonWithAID:(id)a0;
- (void)trackClickLikeWithAID:(id)a0;
- (void)trackClickDislikeWithAID:(id)a0;
- (void)trackClickHeadWithAID:(id)a0;
- (void)trackPlayFinishWithAID:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
