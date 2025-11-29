@class NSString;

@interface TPLiveReportInfo : TPDefaultReportInfo

@property (nonatomic) long long adPlayLength;
@property (nonatomic) long long programId;
@property (nonatomic) long long streamId;
@property (nonatomic) long long contentId;
@property (nonatomic) long long playTime;
@property (nonatomic) BOOL isUserPay;
@property (nonatomic) long long liveType;
@property (retain, nonatomic) NSString *cdnServer;
@property (nonatomic) BOOL isLookBack;
@property (nonatomic) long long liveDelay;

- (long long)playType;
- (void).cxx_destruct;

@end
