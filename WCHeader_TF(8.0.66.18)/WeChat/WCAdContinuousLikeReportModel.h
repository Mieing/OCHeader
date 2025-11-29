@class NSString;

@interface WCAdContinuousLikeReportModel : WCAdChannelReportExtendInfoModel

@property (retain, nonatomic) NSString *numberRequestId;
@property (nonatomic) unsigned int totalLikeCount;
@property (nonatomic) unsigned int continuousLikeCount;
@property (nonatomic) unsigned int bannerPlayCount;

- (void).cxx_destruct;

@end
