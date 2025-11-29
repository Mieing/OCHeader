@class NSString, NSDictionary;

@interface MMFinderLiveKTVPlayResultInfo : NSObject

@property (nonatomic) long long result;
@property (nonatomic) long long customResult;
@property (nonatomic) int errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (nonatomic) unsigned long long networkType;
@property (nonatomic) int songPrepareCostTime;
@property (nonatomic) BOOL noteEmpty;
@property (nonatomic) BOOL qrcEmpty;
@property (nonatomic) int sampleRate;
@property (nonatomic) int channelCnt;
@property (nonatomic) int scoreEngineFlag;
@property (nonatomic) int reverbEngineFlag;
@property (retain, nonatomic) NSDictionary *extraInfo;

+ (id)generateResultForResPrepare:(id)a0 prepareCostTime:(int)a1;
+ (id)generateResultForSongStart:(long long)a0 extraRet:(int)a1 frameUnitParam:(id)a2 scoreEngineFlag:(int)a3 reverbEngineFlag:(int)a4 prepareCostTime:(int)a5;
+ (unsigned long long)transferMetricsNetworkTypeToKTVNetworkType:(unsigned int)a0;

- (BOOL)isValid;
- (id)description;
- (void).cxx_destruct;

@end
