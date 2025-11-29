@class NSString;

@interface WCAdFinderLiveNoticeReserveResultModel : WCAdChannelReportExtendInfoModel

@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *finderLiveNoticeId;
@property (nonatomic) long long result;
@property (nonatomic) int source;

- (void).cxx_destruct;

@end
