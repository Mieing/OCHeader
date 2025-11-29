@class NSDictionary, NSNumber;
@protocol BDSimPlayerTrackingDataProvider;

@interface BDSimPlayEventFormatter : NSObject

@property (weak, nonatomic) id<BDSimPlayerTrackingDataProvider> dataSource;
@property (retain, nonatomic) NSDictionary *contextEventInfo;
@property (retain, nonatomic) NSNumber *qualityType;

+ (id)formatterWithDataSource:(id)a0;

- (id)referString;
- (id)isEnableBmf;
- (id)getAppSessionID;
- (id)bsModel;
- (id)playURLs;
- (id)playerTypeString;
- (id)getBitrateGearNameSet;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })playerRealShowFrame;
- (double)preloadSize;
- (BOOL)_enableNNSR;
- (BOOL)isCDNURLExpired;
- (long long)trategyType;
- (id)_isCurrentVideoH265;
- (id)playURIString;
- (id)__qualityType;
- (id)_getRadioAccess;
- (id)p_isFromFamiliarCacheNumber;
- (BOOL)p_isFromFamiliarCache;
- (id)playerNetworkTypeString;
- (id)calcBitrate;
- (id)playbackTimeWhenStop;
- (id)HDRVideoMode;
- (void)updateContextEventInfo;
- (id)manualBSModel;
- (long long)_errcodeNNSR;
- (id)simPlayerTypeString;
- (id)_getFormatByIsDashSource:(BOOL)a0;
- (id)getAudioBitrateValue;
- (void)addVideoBlockParamsForLogDic:(id)a0;
- (void)addVideoVQScoreMVMAF:(id)a0;
- (id)getStrategyTokens:(id)a0;
- (void)addVRProjectionModelType:(id)a0;
- (void)addVideoCombinedGear:(id)a0;
- (id)getUrlBucketType;
- (id)valueOfBSGear:(id)a0 isHightest:(BOOL)a1;
- (void)addAudioEffectType:(id)a0;
- (id)getThermalState;
- (void)addUltimateFusionQualityData:(id)a0;
- (id)playBitrateWhenStop;
- (void)addDownloadTaskCount:(id)a0;
- (void)add302Info:(id)a0;
- (BOOL)isSimPlayerV2;
- (id)internet_speed;
- (id)onPlayError:(id)a0;
- (id)onPlayBlock:(id)a0;
- (id)onPlayRequest:(id)a0;
- (id)onPlayQuality:(id)a0;
- (id)onPlayResponse:(id)a0;
- (id)onPlayFailed:(id)a0;
- (id)onPlayEnd:(id)a0;
- (void)addPlayEvent:(id)a0 toData:(id)a1;
- (id)onPlayUrlError:(id)a0;
- (id)srSharpnessStrength;
- (id)hightestBSGear;
- (id)lowestBSGear;
- (BOOL)isPlay720P;
- (id)onPlayStop:(id)a0;
- (id)model;
- (void).cxx_destruct;
- (id)playerController;
- (id)initWithDataSource:(id)a0;

@end
