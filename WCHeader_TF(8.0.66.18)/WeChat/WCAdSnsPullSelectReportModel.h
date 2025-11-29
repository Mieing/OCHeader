@class NSString, WCAdSnsPullSelectAdInfo;

@interface WCAdSnsPullSelectReportModel : NSObject

@property (retain, nonatomic) WCAdSnsPullSelectAdInfo *timelinePullAd;
@property (retain, nonatomic) WCAdSnsPullSelectAdInfo *adPullAd;
@property (retain, nonatomic) NSString *sessionKeyAd;
@property (retain, nonatomic) NSString *selectedSnsId;
@property (nonatomic) int stateType;

- (void).cxx_destruct;

@end
