@class NSString, IESLiveMultiRtcInfo, IESLiveMultiLiveCoreInfo;

@interface HTSLiveLinkerRTCActionJoinRTCContent : IESLivePBBaseMessage

@property (nonatomic) BOOL joinRtc;
@property (copy, nonatomic) NSString *rtcExtInfo;
@property (copy, nonatomic) NSString *liveCoreExtInfo;
@property (copy, nonatomic) NSString *linkmicIdStr;
@property (retain, nonatomic) IESLiveMultiRtcInfo *multiRtcInfo;
@property (nonatomic) BOOL hasMultiRtcInfo;
@property (retain, nonatomic) IESLiveMultiLiveCoreInfo *multiLiveCoreInfo;
@property (nonatomic) BOOL hasMultiLiveCoreInfo;

+ (id)descriptor;

@end
