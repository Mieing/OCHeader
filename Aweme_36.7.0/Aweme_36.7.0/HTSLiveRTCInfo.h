@class NSString;

@interface HTSLiveRTCInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *rtcExtraInfo;
@property (copy, nonatomic) NSString *liveCoreExtraInfo;

+ (id)descriptor;

@end
