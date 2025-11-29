@class NSString, NSMutableArray, NSDictionary;

@interface MMLiveAdsParams : NSObject

@property (nonatomic) BOOL isAdsLive;
@property (retain, nonatomic) NSString *feedbackUrl;
@property (copy, nonatomic) id /* block */ adsSuccess;
@property (retain, nonatomic) NSMutableArray *feedbackInfoArray;
@property (nonatomic) unsigned long long originExposeTimeStamp;
@property (nonatomic) unsigned long long lastReportActionTimeStamp;
@property (nonatomic) unsigned long long viewableExposeTimeStamp;
@property (nonatomic) BOOL hasReportAction;
@property (retain, nonatomic) NSDictionary *reportInfo;
@property (copy, nonatomic) NSString *expReportLink;
@property (copy, nonatomic) NSString *clkReportLink;
@property (nonatomic) unsigned long long rewardTime;

- (id)init;
- (void).cxx_destruct;

@end
