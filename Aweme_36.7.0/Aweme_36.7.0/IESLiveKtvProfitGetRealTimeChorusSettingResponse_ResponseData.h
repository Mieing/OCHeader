@class IESLiveChorusMixStreamInfo, IESLiveChorusCDNInfo;

@interface IESLiveKtvProfitGetRealTimeChorusSettingResponse_ResponseData : IESLivePBBaseMessage

@property (nonatomic) int orderPermissionType;
@property (nonatomic) int joinPermissionType;
@property (nonatomic) int leadChorusSwitch;
@property (nonatomic) long long assignUserOrderThreshold;
@property (nonatomic) long long assignUserJoinThreshold;
@property (nonatomic) long long assignUserLeadThreshold;
@property (nonatomic) BOOL isMassChorus;
@property (nonatomic) BOOL isSupportChorusGuest;
@property (nonatomic) BOOL isJoinChorusGiftInvalid;
@property (nonatomic) BOOL isOrderSongGiftInvalid;
@property (nonatomic) BOOL isOpenSubscribe;
@property (retain, nonatomic) IESLiveChorusMixStreamInfo *mixStreamInfo;
@property (nonatomic) BOOL hasMixStreamInfo;
@property (retain, nonatomic) IESLiveChorusCDNInfo *chorusCdnInfo;
@property (nonatomic) BOOL hasChorusCdnInfo;

+ (id)descriptor;

@end
