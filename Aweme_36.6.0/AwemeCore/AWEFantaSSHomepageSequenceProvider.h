@class NSString, NSMutableArray, NSMutableDictionary;

@interface AWEFantaSSHomepageSequenceProvider : NSObject <FantaDataCollectorListener>

@property (retain, nonatomic) NSMutableArray *lastReqGroupsSequence;
@property (retain, nonatomic) NSMutableDictionary *searchIDWithReqIDMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)getSequenceFeatureRawDataWithMaxSearchIDCount:(long long)a0 maxRequestIDCount:(long long)a1;
- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (void)loadFeatureProvider;
- (void)updateSSHomepageSequenceSearchID:(id)a0 requestID:(id)a1 query:(id)a2 reqQuery:(id)a3;
- (id)searchIDItemWithSearchID:(id)a0;
- (void)p_addSearchIDItem:(id)a0;
- (id)requestIDItemWithRequestID:(id)a0 inSearchIDModel:(id)a1;
- (void)p_addRequestIDItem:(id)a0 toSearchIDItem:(id)a1;
- (id)requestIDItemWithRequestID:(id)a0;
- (id)docIDItemModelWithDocID:(id)a0 inReqModel:(id)a1;
- (BOOL)isSSHomePageForAppLogParams:(id)a0;
- (void)p_handleShowEventWithParams:(id)a0;
- (void)p_handleLogEventWithParams:(id)a0 actionType:(long long)a1;
- (void)p_handleStayTimeEventWithParams:(id)a0;
- (id)docIDItemModelWithRequestID:(id)a0 docID:(id)a1;
- (void)updateUserActForModel:(id)a0 userAct:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
