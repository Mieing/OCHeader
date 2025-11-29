@class NSString, NSNumber, NSDictionary;

@interface IESLiveLinkRTCInteractRemoteUserQosInfo : NSObject

@property (readonly, nonatomic) NSString *user_id;
@property (retain, nonatomic) NSNumber *recv_video_bitrate;
@property (retain, nonatomic) NSNumber *recv_vdecode_fps;
@property (retain, nonatomic) NSNumber *recv_vrender_fps;
@property (retain, nonatomic) NSNumber *recv_video_loss;
@property (retain, nonatomic) NSNumber *recv_audio_bitrate;
@property (retain, nonatomic) NSNumber *recv_audio_volume;
@property (retain, nonatomic) NSNumber *recv_audio_volume_original;
@property (retain, nonatomic) NSNumber *recv_audio_delay;
@property (retain, nonatomic) NSNumber *recv_audio_loss;
@property (retain, nonatomic) NSNumber *recv_audio_rtt;
@property (retain, nonatomic) NSNumber *recv_video_rtt;
@property (retain, nonatomic) NSDictionary *recv_audio_volume_ex;
@property (nonatomic) long long lastResetTime;

- (long long)timeMS;
- (id)getJsonDict;
- (void).cxx_destruct;
- (void)resetValues;
- (id)initWithUid:(id)a0;

@end
