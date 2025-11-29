@class NSString, FinderLiveReplayTransitionInfo, FinderLiveReplayTransitionPreloadInfo, NSMutableArray;

@interface FinderLiveReplayInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int supportScreenRotate;
@property (nonatomic) unsigned long long watchUv;
@property (nonatomic) unsigned int origDuration;
@property (nonatomic) unsigned int replaySwitchStatus;
@property (retain, nonatomic) FinderLiveReplayTransitionInfo *replayTransitionVideoInfo;
@property (retain, nonatomic) FinderLiveReplayTransitionPreloadInfo *replayTransitionPreloadInfo;
@property (retain, nonatomic) NSMutableArray *anchorSpecified;
@property (retain, nonatomic) NSString *replayGuidePageUrl;
@property (retain, nonatomic) NSString *hlsEncUrl;
@property (retain, nonatomic) NSString *hlsEncToken;
@property (nonatomic) unsigned long long refReplayObjectId;
@property (nonatomic) unsigned int isLiveShowMemberReplaySwitch;
@property (nonatomic) unsigned long long replayControlFlag;

+ (void)initialize;

- (void)setReplayControlFlag:(unsigned long long)a0;
- (unsigned long long)replayControlFlag;
- (void)setIsLiveShowMemberReplaySwitch:(unsigned int)a0;
- (unsigned int)isLiveShowMemberReplaySwitch;
- (void)setRefReplayObjectId:(unsigned long long)a0;
- (unsigned long long)refReplayObjectId;
- (void)setHlsEncToken:(id)a0;
- (id)hlsEncToken;
- (void)setHlsEncUrl:(id)a0;
- (id)hlsEncUrl;
- (void)setReplayGuidePageUrl:(id)a0;
- (id)replayGuidePageUrl;
- (void)setAnchorSpecified:(id)a0;
- (id)anchorSpecified;
- (void)setReplayTransitionPreloadInfo:(id)a0;
- (id)replayTransitionPreloadInfo;
- (void)setReplayTransitionVideoInfo:(id)a0;
- (id)replayTransitionVideoInfo;
- (void)setReplaySwitchStatus:(unsigned int)a0;
- (unsigned int)replaySwitchStatus;
- (void)setOrigDuration:(unsigned int)a0;
- (unsigned int)origDuration;
- (void)setWatchUv:(unsigned long long)a0;
- (unsigned long long)watchUv;
- (void)setSupportScreenRotate:(unsigned int)a0;
- (unsigned int)supportScreenRotate;

@end
