@class AWELivePreStreamContext, NSMutableArray;
@protocol AWEHttpTask;

@interface AWELivePreStreamInstantEcomManager : NSObject

@property (nonatomic) BOOL pitayaObservered;
@property (retain, nonatomic) NSMutableArray *cacheSearchWords;
@property (retain, nonatomic) id<AWEHttpTask> requestTask;
@property (retain, nonatomic) AWELivePreStreamContext *context;

+ (id)sharedManager;

- (void)dealPitayaCallback:(id)a0;
- (void)trackPitayaQueryRequest:(id)a0;
- (void)requestSearchEcom:(id)a0;
- (BOOL)enableOptCache;
- (id)searchLocalWordModelWithRoomID:(id)a0 requestID:(id)a1;
- (id)buildCommonParamsAwemeModel:(id)a0;
- (id)buildCommonParamsInstantModel:(id)a0;
- (BOOL)supportPitayaSearchInstantEcomWord:(id)a0;
- (long long)ecomInstantStyle;
- (void)addPitayaObserver;
- (void)removePitayaObserver;
- (id)searchLocalWordModelWithRoomID:(id)a0;
- (void)trackWordClick:(id)a0 awemeModel:(id)a1 extra:(id)a2;
- (void)trackWordShow:(id)a0 awemeModel:(id)a1 extra:(id)a2;
- (void)trackWordsWithAwemeModel:(id)a0 extra:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
