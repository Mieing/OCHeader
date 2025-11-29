@class NSString, IESLiveChorusAccompanimentInfo, IESLiveChorusCDNInfo;

@interface IESLiveKtvProfitJoinChorusResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) int userType;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *subRtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (retain, nonatomic) IESLiveChorusCDNInfo *chorusCdnInfo;
@property (nonatomic) BOOL hasChorusCdnInfo;
@property (nonatomic) long long scoreIntervalMs;
@property (copy, nonatomic) NSString *mainSingerLinkmicIdStr;
@property (nonatomic) double concertVolume;
@property (retain, nonatomic) IESLiveChorusAccompanimentInfo *chorusAccompanimentInfo;
@property (nonatomic) BOOL hasChorusAccompanimentInfo;

+ (id)descriptor;

@end
