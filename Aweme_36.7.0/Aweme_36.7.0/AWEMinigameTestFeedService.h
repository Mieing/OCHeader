@interface AWEMinigameTestFeedService : NSObject

+ (void)enterInnerTestFeedFlow:(id)a0;
+ (void)enterOuterTestFeedFlow:(id)a0;
+ (void)requestInnerFeed:(id)a0 nowTime:(double)a1;
+ (void)toastWithContent:(id)a0;
+ (void)requestInnerFeedFlowPackWithParams:(id)a0;
+ (void)enterOuterTestFeedFlow:(id)a0 bottomInfoDic:(id)a1;
+ (void)enterInnerTestFeedFlowWithModelList:(id)a0 bottomInfoDic:(id)a1 requestParams:(id)a2;
+ (id)transToBDPSchema:(id)a0;

@end
