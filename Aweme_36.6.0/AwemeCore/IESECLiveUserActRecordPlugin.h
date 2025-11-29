@class NSString, NSMutableDictionary, IESECLiveContext, NSArray, NSMutableArray;

@interface IESECLiveUserActRecordPlugin : NSObject <IESECLiveUserRecordActionInterface, IESECLiveEventPlugin>

@property (retain, nonatomic) NSMutableDictionary *recordDict;
@property (retain, nonatomic) NSMutableDictionary *clickRecordDict;
@property (retain, nonatomic) NSMutableDictionary *showRecordDict;
@property (retain, nonatomic) NSString *lastExplainProductID;
@property (retain, nonatomic) NSString *newestClickProductID;
@property (retain, nonatomic) IESECLiveContext *liveContext;
@property (retain, nonatomic) NSArray *clickTabProductIDs;
@property (retain, nonatomic) NSMutableArray *clickProductIDArray;
@property (retain, nonatomic) NSMutableArray *showProductIDArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveContext:(id)a0;
- (void)recordClickByProductID:(id)a0 promotionID:(id)a1;
- (void)recordShowByProductID:(id)a0;
- (void)recordCurExplainGoodByProductID:(id)a0;
- (void)recordClickTabProductIDs:(id)a0;
- (id)getRecommendInfoForEcomBoard;
- (id)getProductClickInfo;
- (id)getProductShowInfo;
- (id)getLastExplainProductID;
- (id)getNewestClickProductID;
- (id)getClickTabProductIDs;
- (id)initPluginWithLiveContext:(id)a0;
- (void)receive:(id)a0;
- (id)consumedEventsSet;
- (BOOL)dispatchInBackgroundThread;
- (void)destroyPlugin;
- (void).cxx_destruct;

@end
