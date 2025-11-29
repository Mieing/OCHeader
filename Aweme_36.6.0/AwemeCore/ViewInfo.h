@class RTCInfo, HTSLiveStreamUrl, ViewGuestInfo;

@interface ViewInfo : IESLivePBBaseMessage

@property (nonatomic) long long viewId;
@property (retain, nonatomic) ViewGuestInfo *guestInfo;
@property (nonatomic) BOOL hasGuestInfo;
@property (retain, nonatomic) RTCInfo *rtcInfo;
@property (nonatomic) BOOL hasRtcInfo;
@property (retain, nonatomic) HTSLiveStreamUrl *streamInfo;
@property (nonatomic) BOOL hasStreamInfo;

+ (id)descriptor;

@end
