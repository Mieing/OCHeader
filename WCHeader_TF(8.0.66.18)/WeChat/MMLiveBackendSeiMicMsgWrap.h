@class MMLiveAudioRoomSEIConnectMicMsg;

@interface MMLiveBackendSeiMicMsgWrap : NSObject

@property (retain, nonatomic) MMLiveAudioRoomSEIConnectMicMsg *audioRoomSeiMicMsg;
@property (nonatomic) unsigned long long beginTimeMs;

- (void).cxx_destruct;

@end
