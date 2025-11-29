@class NSString;

@interface IESLivePlaybackDanmakuEngineSettings : IESLiveDanmakuEngineSettings <IESLivePlaybackOrientationActions, IESLivePlaybackDanmakuEngineSettingsProtocol>

@property (nonatomic) BOOL isLandscape;
@property (nonatomic) BOOL danmakuEnableForLandscape;
@property (nonatomic) BOOL portraitStream;
@property (nonatomic) double avatarImageSize;
@property (nonatomic) long long specialLimitMaxCount;
@property (nonatomic) long long areaPercent;
@property (nonatomic) BOOL disableDanmakuByHand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double fontSize;
@property (nonatomic) BOOL enableNormalDanmuku;
@property (nonatomic) double alpha;
@property (nonatomic) double normalDanmakuHeight;
@property (nonatomic) double normalChannelHeight;
@property (nonatomic) double badgeSize;
@property (nonatomic) long long giftLimitMaxCount;
@property (nonatomic) double animationSpeed;

+ (id)defaultSettingsWithDiContext:(id)a0;
+ (id)livePlaybackDanmakuConfig;

- (void)onOrientationTransitionBegin:(long long)a0;
- (id)initWithDiContext:(id)a0;
- (void)reloadRemoteSettings;

@end
