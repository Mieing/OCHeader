@class NSString, IESLiveChorusCDNInfo;

@interface GetRealTimeChorusInfoResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) int userType;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (retain, nonatomic) IESLiveChorusCDNInfo *chorusCdnInfo;
@property (nonatomic) BOOL hasChorusCdnInfo;

+ (id)descriptor;

@end
