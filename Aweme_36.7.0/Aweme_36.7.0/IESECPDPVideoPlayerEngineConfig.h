@class NSString;

@interface IESECPDPVideoPlayerEngineConfig : NSObject

@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL repeated;
@property (nonatomic) long long startTime;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long videoScaleMode;
@property (nonatomic) long long maxCacheDuration;
@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) unsigned long long durationSamplingRate;
@property (copy, nonatomic) NSString *playerTag;
@property (copy, nonatomic) NSString *playerSubTag;

+ (unsigned long long)engineTypeWithOldConfig:(id)a0;

- (void)updateWithOldPlayerConfig:(id)a0;
- (id)initEngineConfigWithOldPlayerConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
