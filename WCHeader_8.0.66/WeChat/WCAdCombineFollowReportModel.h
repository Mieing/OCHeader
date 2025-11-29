@class NSString;

@interface WCAdCombineFollowReportModel : WCAdChannelReportExtendInfoModel

@property (retain, nonatomic) NSString *brandUsername;
@property (nonatomic) int brandOpenType;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) int brandResult;
@property (nonatomic) int finderResult;
@property (nonatomic) int source;
@property (retain, nonatomic) NSString *canvasDynamicInfo;

- (void).cxx_destruct;

@end
