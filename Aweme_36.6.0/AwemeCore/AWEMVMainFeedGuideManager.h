@class AWEAwemeResponseModel, NSMutableArray, AWEMVChannelPageContext;
@protocol AWEMVDataControllerProtocol;

@interface AWEMVMainFeedGuideManager : NSObject

@property (retain, nonatomic) id<AWEMVDataControllerProtocol> mvDataController;
@property (retain, nonatomic) AWEMVChannelPageContext *pageContext;
@property (retain, nonatomic) AWEAwemeResponseModel *landingResponseModel;
@property (retain, nonatomic) NSMutableArray *pendingCompletions;
@property (nonatomic) BOOL isFetchingLandingData;
@property (nonatomic) BOOL isLandingDataReady;

+ (id)syncFetchLandingData;
+ (void)clearLandingData;
+ (void)preloadLandingDataWithParams:(id)a0;
+ (void)preloadLandingDataWithItemID:(id)a0 authorID:(id)a1;
+ (void)asyncFetchLandingDataWithItemID:(id)a0 authorID:(id)a1 completion:(id /* block */)a2;
+ (BOOL)isReady;
+ (id)sharedInstance;

- (void)clearLandingData;
- (void)fetchLandingDataWithItemID:(id)a0 authorID:(id)a1 completion:(id /* block */)a2;
- (void)fetchLandingDataWithParams:(id)a0 completion:(id /* block */)a1;
- (void)invokeAndClearAllPendingCompletions:(id)a0 error:(id)a1;
- (void)requestLandingDataWithParams:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
