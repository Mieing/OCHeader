@class BSTCheckConfig, NSMutableDictionary, NSMutableSet;

@interface BSTChecker : NSObject

@property (nonatomic) BOOL enabled;
@property (nonatomic) long long maxMatchCount;
@property long long matchedCount;
@property (retain) NSMutableDictionary *errorParams;
@property (retain) NSMutableDictionary *filteredErrorKeys;
@property (retain) NSMutableSet *lostKeys;
@property (retain) NSMutableSet *errorKeys;
@property (retain) NSMutableDictionary *bstEvents;
@property (retain) NSMutableDictionary *originEvents;
@property (retain, nonatomic) BSTCheckConfig *config;

- (void)pageDisplayEnd;
- (void)matchEventsWithEventParams:(id)a0 eventsMap:(id)a1 isBst:(BOOL)a2 event:(id)a3;
- (BOOL)needCheckWithName:(id)a0 params:(id)a1;
- (void)checkParamsWithBstParams:(id)a0 originParams:(id)a1 patternMap:(id)a2;
- (void)reportErrorEventWithBtm:(id)a0 key:(id)a1 type:(id)a2 extraInfo:(id)a3;
- (BOOL)isJsonString:(id)a0;
- (id)checkJsonStringWithBstValue:(id)a0 originValue:(id)a1;
- (void)checkEventWithName:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
