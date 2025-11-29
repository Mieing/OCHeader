@class SnsFinderLiveInfo;

@interface Rabbit2023Config : WXPBGeneratedMessage

@property (nonatomic) int postStatus;
@property (nonatomic) int linkVisible;
@property (nonatomic) int adLinkVisible;
@property (nonatomic) int useRawLinkFinderUserNameEnterLive;
@property (retain, nonatomic) SnsFinderLiveInfo *forceLiveInfo;
@property (nonatomic) int enabled;
@property (nonatomic) int adEnabled;
@property (nonatomic) int joinLiveMode;
@property (nonatomic) int adJoinLiveMode;

+ (void)initialize;

- (void)setAdJoinLiveMode:(int)a0;
- (int)adJoinLiveMode;
- (void)setJoinLiveMode:(int)a0;
- (int)joinLiveMode;
- (void)setAdEnabled:(int)a0;
- (int)adEnabled;
- (void)setEnabled:(int)a0;
- (int)enabled;
- (void)setForceLiveInfo:(id)a0;
- (id)forceLiveInfo;
- (void)setUseRawLinkFinderUserNameEnterLive:(int)a0;
- (int)useRawLinkFinderUserNameEnterLive;
- (void)setAdLinkVisible:(int)a0;
- (int)adLinkVisible;
- (void)setLinkVisible:(int)a0;
- (int)linkVisible;
- (void)setPostStatus:(int)a0;
- (int)postStatus;

@end
