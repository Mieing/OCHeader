@class NSString, NSDictionary, AWEAwemeModel, AWEPlayVideoAudioMetricsContext;
@protocol IESVideoPlayerProtocol;

@interface AWEPlayVideoAudioManager : NSObject <ALMOwnPlayerAudioProxyDelegate>

@property (retain, nonatomic) AWEPlayVideoAudioMetricsContext *audioMetricsContext;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)audioOpenWithSampleRate:(long long)a0 frameSampleNB:(long long)a1 bytePerSample:(long long)a2 channels:(long long)a3 format:(long long)a4 isPacked:(long long)a5 duration:(long long)a6;
- (void)audioWriteWithBuffers:(char **)a0 bufferSize:(long long)a1 samples:(long long)a2 timeStamp:(long long)a3;
- (void)audioClose;
- (void)setAudioProxyDelegateIfNeeded;
- (void).cxx_destruct;
- (id)init;

@end
