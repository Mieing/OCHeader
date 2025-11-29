@class NSMutableDictionary;

@interface AWEFeedNegativeFeedbackFilterManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *negativeInfoDict;

- (void)buildNegativeInfoDict;
- (void)loadNegativeFeedbackInfoDictFromCache;
- (id)negativeFeedbackInfoList;
- (id)negativeFeedbackActionList;
- (void)removeInvalidExpirationNegativeInfoWithTime:(BOOL)a0;
- (void)storageNegativeFeedbackInfoDict;
- (id)createNegativeFeedbackInfoModelWithActionType:(unsigned long long)a0 negativeInfoType:(id)a1 value:(id)a2;
- (void)logAllNegativeModelInfo;
- (void)addNegativeFeedbackInfoWithActionType:(unsigned long long)a0 negativeInfoType:(id)a1 value:(id)a2;
- (void)removeNegativeFeedbackInfoWithActionType:(unsigned long long)a0 negativeInfoType:(id)a1 value:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)addObserver;
- (void)applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (void)applicationWillTerminate:(id)a0;

@end
