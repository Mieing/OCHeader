@protocol IESPlayerLoadControlInterface, ALMVideoPlayerAudioWrapperProtocol;

@interface BDSimPlayerConfiguration : NSObject

@property (nonatomic) BOOL enableSRModule;
@property (nonatomic) BOOL enableSSModule;
@property (nonatomic) BOOL enableTrackingModule;
@property (nonatomic) long long bizId;
@property (nonatomic) unsigned long long preferredPlayerType;
@property (nonatomic) BOOL pictureInPictureSupported;
@property (nonatomic) BOOL truncateTailWhenRepeated;
@property (nonatomic) BOOL useCache;
@property (nonatomic) BOOL ownPlayerPlayWithURLs;
@property (nonatomic) BOOL enableFileMemory;
@property (nonatomic) BOOL isEnableOnePlayMerge;
@property (nonatomic) struct EngineAudioWrapper { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void *x4; } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { void /* function */ *x0; void /* function */ *x1; void *x2; } *videoWrapper;
@property (retain, nonatomic) id<ALMVideoPlayerAudioWrapperProtocol> audioWrapperV2;
@property (retain, nonatomic) id<IESPlayerLoadControlInterface> loadControl;

+ (id)configuration;

- (void).cxx_destruct;
- (id)init;

@end
