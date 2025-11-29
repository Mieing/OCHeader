@class NSMutableDictionary, NSRecursiveLock;

@interface IESEffectNotHitCacheReasonReporter : NSObject

@property (retain, nonatomic) NSMutableDictionary *reasonsStore;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)sharedInstance;

- (void)clearReasonsForEffectIdentifier:(id)a0;
- (BOOL)startAnalysisForEffectID:(id)a0;
- (void)endAnalysis;
- (id)reasonsForEffectIdentifier:(id)a0;
- (id)reasonForEffectIdentifier:(id)a0;
- (void)clearAllReasons;
- (void)reportReasonWithCode:(long long)a0 message:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
