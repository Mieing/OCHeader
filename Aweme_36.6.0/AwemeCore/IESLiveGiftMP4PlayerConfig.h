@class NSDictionary, NSString;
@protocol IESLiveRoomService;

@interface IESLiveGiftMP4PlayerConfig : NSObject

@property (nonatomic) BOOL bpeaAudioCertEnable;
@property (nonatomic) BOOL enableOptRender;
@property (nonatomic) BOOL enableOptRenderOtherContentMode;
@property (nonatomic) BOOL giftSoundVolumeDynamicAdjust;
@property (nonatomic) BOOL liveAudioGiftDisableAec;
@property (nonatomic) double liveAudioGiftAECDelayTime;
@property (nonatomic) long long liveAudioGiftAECRetryTime;
@property (copy, nonatomic) NSDictionary *soundGiftVolumeConfigs;
@property (copy, nonatomic) NSString *bpeaAudioCertToken;
@property (copy, nonatomic) NSString *resourcePath;
@property (readonly, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) NSDictionary *effectMixGiftMaskInfo;
@property (nonatomic) BOOL loop;

- (id)initWithPath:(id)a0 room:(id)a1;
- (void).cxx_destruct;

@end
