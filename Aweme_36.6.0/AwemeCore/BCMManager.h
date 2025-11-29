@class NSArray, NSMutableDictionary;

@interface BCMManager : NSObject

@property (class, readonly, nonatomic) BCMManager *shared;

@property (readonly, nonatomic) NSMutableDictionary *configs;
@property BOOL isValid;
@property (retain, nonatomic) NSMutableDictionary *bcmReportFreq;
@property (copy, nonatomic) NSArray *bcmInChainWhitelist;
@property (copy, nonatomic) NSArray *bcmAllowlist;
@property (copy, nonatomic) NSArray *bcmBizAllowlist;

+ (void)setupWithConfig:(id)a0;
+ (void)configDidUpdate;
+ (id)getBridges;
+ (void)invalidate;
+ (BOOL)isValid;
+ (void)setup;

- (void)setBcmPageParams:(id)a0 forKey:(id)a1 responder:(id)a2;
- (void)appendBcmPageParams:(id)a0 forKey:(id)a1 responder:(id)a2;
- (void)setBcmUnitParams:(id)a0 forKey:(id)a1 responder:(id)a2;
- (void)appendBcmUnitParams:(id)a0 forKey:(id)a1 responder:(id)a2;
- (id)getBcmFullParamsForKey:(id)a0 responder:(id)a1;
- (id)getBcmChainForKey:(id)a0 WithBtmModel:(id)a1 chainLength:(long long)a2;
- (id)getBcmFullParamsForKey:(id)a0 responder:(id)a1 chainLength:(long long)a2;
- (id)getBcmChainWithSourceBtmToken:(id)a0;
- (id)getBcmChainWithSourceBtmToken:(id)a0 chainLength:(long long)a1;
- (id)getBcmChainWithSourceBtmToken:(id)a0 biz:(id)a1 chainLength:(long long)a2;
- (void)mergeingNodesGraphjsonString:(id)a0 forkey:(id)a1;
- (id)checkTrackGraph:(id)a0 withKey:(id)a1 preItemBlock:(id /* block */)a2;
- (id)btmListWithResponder:(id)a0;
- (id)btmListWithSourceBtmToken:(id)a0;
- (id)getEnumBstFormInfo:(id)a0;
- (void)getBcmWhitelist;
- (id)bcmHolderFromPage:(id)a0 autoCreate:(BOOL)a1;
- (id)bcmHolderFromNode:(id)a0 autoCreate:(BOOL)a1;
- (id)pageShowParamsForPage:(id)a0;
- (void)resetBcmHolderPage:(id)a0;
- (void)reportBcmCall:(id)a0 key:(id)a1 params:(id)a2 responder:(id)a3;
- (void)object:(id)a0 appendObject:(id)a1;
- (id)getBcmChainWithBtmModel:(id)a0 biz:(id)a1 chainLength:(long long)a2 isDomainStandard:(BOOL)a3;
- (id)defaultBizArray;
- (void)replaceUnitForParams:(id)a0 withAdditionalParams:(id)a1;
- (id)updateCDAndUnitParamsFromOriginArray:(id)a0 withBtmModel:(id)a1;
- (id)filterContentAndPageIdFromArray:(id)a0;
- (id)getBcmChainWithSourceBtmToken:(id)a0 biz:(id)a1 chainLength:(long long)a2 isDomainStandard:(BOOL)a3;
- (id)btmListWithSourceBtmToken:(id)a0 length:(long long)a1;
- (void)addBcmParams:(id)a0 toNodeStorage:(id)a1;
- (void)registerParamCheckHandler:(id /* block */)a0;
- (void)setDefaultAllowlist:(id)a0;
- (void)connectFormatter:(id)a0 withKey:(id)a1;
- (id)pageRepresenterForResponder:(id)a0;
- (id)getBcmFullParamsForKey:(id)a0 pageRepresenter:(id)a1;
- (void)associateBcmParams:(id)a0 withNode:(id)a1;
- (void).cxx_destruct;
- (id)getConfigForKey:(id)a0;
- (void)setConfig:(id)a0 forKey:(id)a1;

@end
