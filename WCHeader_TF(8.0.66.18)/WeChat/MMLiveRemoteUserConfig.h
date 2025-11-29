@class MMLiveAudioVolumeManageLogic, NSString, MMLiveAudioVolumeInfo;

@interface MMLiveRemoteUserConfig : NSObject <NSCopying>

@property (retain, nonatomic) MMLiveAudioVolumeManageLogic *volumeManageLogic;
@property (copy, nonatomic) NSString *sdkUserId;
@property (copy, nonatomic) NSString *sdkRoomId;
@property (nonatomic) BOOL isVideoEnabled;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) BOOL isVideoMuted;
@property (nonatomic) BOOL isAudioMuted;
@property (nonatomic) long long fillMode;
@property (nonatomic) long long rotation;
@property (readonly, nonatomic) int volume;
@property (readonly, nonatomic) MMLiveAudioVolumeInfo *preferVolumeInfo;

- (id)initWithUserId:(id)a0 andRoomId:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setVolume:(long long)a0 business:(long long)a1;
- (void)unSetVolume:(long long)a0;
- (void).cxx_destruct;

@end
