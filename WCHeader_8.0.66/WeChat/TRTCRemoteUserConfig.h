@class NSString;

@interface TRTCRemoteUserConfig : NSObject

@property (copy, nonatomic) NSString *roomId;
@property (nonatomic) BOOL isVideoEnabled;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) BOOL isVideoMuted;
@property (nonatomic) BOOL isAudioMuted;
@property (nonatomic) long long fillMode;
@property (nonatomic) long long rotation;
@property (nonatomic) long long volume;

- (id)initWithRoomId:(id)a0;
- (void).cxx_destruct;

@end
