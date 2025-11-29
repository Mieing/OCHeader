@class HTSEventContext, NSMutableArray, IESLiveSoundEffectModel;
@protocol IESLiveSoundEffectStoreReaction, IESLiveEffectPlatformService, IESLiveEffectPlatformConfig;

@interface IESLiveSoundEffectStore : NSObject

@property (retain, nonatomic) NSMutableArray *soundList;
@property BOOL isResumeLive;
@property BOOL downloadStarted;
@property (retain, nonatomic) id<IESLiveEffectPlatformConfig> config;
@property (retain, nonatomic) id<IESLiveEffectPlatformService> effectPlatformService;
@property (nonatomic) BOOL redDotTapped;
@property (nonatomic) BOOL guidePromptShowed;
@property (retain, nonatomic) IESLiveSoundEffectModel *selectedEffect;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (weak, nonatomic) id<IESLiveSoundEffectStoreReaction> reaction;

- (id)initWithRoom:(id)a0 isResumeLive:(BOOL)a1;
- (void)fetchSoundEffectList;
- (void)manageRawData:(id)a0;
- (void).cxx_destruct;

@end
