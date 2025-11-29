@class NSString, IESLLPOIGoodsDetailBizTracker, IESLLPOIGoodsDetailExceptionMonitor;

@interface IESLLGoodsDetailPageContext : LLDitoPageContext

@property (nonatomic) BOOL isLogin;
@property (nonatomic) BOOL isPopup;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *activityID;
@property (retain, nonatomic) IESLLPOIGoodsDetailBizTracker *bizTracker;
@property (retain, nonatomic) IESLLPOIGoodsDetailExceptionMonitor *exceptionMonitor;
@property (nonatomic) BOOL isFullScreenStatus;
@property (nonatomic) long long renderCacheStage;
@property (nonatomic) BOOL isRefreshFullPage;
@property (copy, nonatomic) NSString *cachePageScene;
@property (copy, nonatomic) NSString *cachePageSubScene;
@property (copy, nonatomic) NSString *ditoPageVersion;
@property (nonatomic) double networkTimeMs;
@property (nonatomic) double jumpTimeMs;
@property (nonatomic) double pageInitTimeMs;
@property (nonatomic) long long networkOptimizeType;

- (id)preMergeLogData;
- (void)assembleDataWithServerResponse:(long long)a0;
- (void)markNetworkTime;
- (BOOL)didHitOneStepOptimize;
- (void)assembleDataWithRouterParams:(id)a0;
- (BOOL)didHitPOIBigFont;
- (id)getYAPInfoParams;
- (void).cxx_destruct;
- (id)init;

@end
