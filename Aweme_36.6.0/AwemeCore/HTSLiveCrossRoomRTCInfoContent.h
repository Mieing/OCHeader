@class IESLiveMultiChannelInfo, IESLivePreRTCInfo;

@interface HTSLiveCrossRoomRTCInfoContent : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveMultiChannelInfo *multiChannelInfo;
@property (nonatomic) BOOL hasMultiChannelInfo;
@property (retain, nonatomic) IESLivePreRTCInfo *preRtcInfo;
@property (nonatomic) BOOL hasPreRtcInfo;
@property (retain, nonatomic) IESLiveMultiChannelInfo *otherMultiChannelInfo;
@property (nonatomic) BOOL hasOtherMultiChannelInfo;

+ (id)descriptor;

@end
