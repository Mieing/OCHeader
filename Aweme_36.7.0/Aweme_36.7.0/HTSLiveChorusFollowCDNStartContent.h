@class NSString, IESLiveChorusCDNInfo;

@interface HTSLiveChorusFollowCDNStartContent : IESLivePBBaseMessage

@property (nonatomic) long long roomId;
@property (copy, nonatomic) NSString *taskId;
@property (retain, nonatomic) IESLiveChorusCDNInfo *cdnInfo;
@property (nonatomic) BOOL hasCdnInfo;

+ (id)descriptor;

@end
