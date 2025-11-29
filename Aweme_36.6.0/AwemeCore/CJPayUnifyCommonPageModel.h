@class NSString, NSDictionary, CJPayTradeInfo, CJPayDyPayLoginContext;

@interface CJPayUnifyCommonPageModel : NSObject

@property (retain, nonatomic) CJPayTradeInfo *jhTradeInfo;
@property (copy, nonatomic) NSDictionary *feMetrics;
@property (nonatomic) long long leftTime;
@property (nonatomic) long long queryTimes;
@property (retain, nonatomic) CJPayDyPayLoginContext *payLoginContext;
@property (copy, nonatomic) id /* block */ isSupportRecommendViewShowWithShowConfigBlock;
@property (nonatomic) BOOL isFromOuter;
@property (copy, nonatomic) NSString *cashierEnterFromMethod;
@property (copy, nonatomic) NSDictionary *trackParams;

- (void).cxx_destruct;

@end
