@class NSString, LiveCore;

@interface HTSLivePushStreamBitrateImp_Douyin : NSObject <IESLivePushStreamBitrate>

@property (retain, nonatomic) LiveCore *livecore;
@property (nonatomic) unsigned long long livecoreNetworkQuality;
@property (nonatomic) BOOL offNetwork;
@property (copy, nonatomic) id /* block */ realBitrateBlock;
@property (copy, nonatomic) id /* block */ networkQualityBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)previewFps;
- (id)initWithLiveCore:(id)a0;
- (void)onNetworkStatusChanged:(id)a0;
- (long long)getAudioBitrate;
- (long long)getDefaultBitrate;
- (long long)getMinBitrate;
- (long long)getMaxBitrate;
- (long long)getRealBitrate;
- (unsigned long long)convertLiveCoreNetworkQuality:(unsigned long long)a0;
- (void)reportRealtimeBitrate;
- (unsigned long long)getRealNetworkQuality;
- (id)inCapFps;
- (id)outCapFps;
- (id)encodeFps;
- (id)realFps;
- (id)pushURL;
- (void).cxx_destruct;
- (id)SDKVersion;
- (id)pushType;
- (void)dealloc;
- (void)setup;
- (struct CGSize { double x0; double x1; })videoSize;

@end
