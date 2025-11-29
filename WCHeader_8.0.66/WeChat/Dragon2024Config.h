@class SnsFinderLiveInfo;

@interface Dragon2024Config : WXPBGeneratedMessage

@property (nonatomic) int postStatus;
@property (nonatomic) int linkVisible;
@property (retain, nonatomic) SnsFinderLiveInfo *forceLiveInfo;
@property (nonatomic) int enabled;
@property (nonatomic) int joinLiveMode;
@property (nonatomic) int submitFireworkCommentEnabled;
@property (nonatomic) int coverFireworkEnabled;
@property (nonatomic) int fireworkEnabled;

+ (void)initialize;

- (void)setFireworkEnabled:(int)a0;
- (int)fireworkEnabled;
- (void)setCoverFireworkEnabled:(int)a0;
- (int)coverFireworkEnabled;
- (void)setSubmitFireworkCommentEnabled:(int)a0;
- (int)submitFireworkCommentEnabled;
- (void)setJoinLiveMode:(int)a0;
- (int)joinLiveMode;
- (void)setEnabled:(int)a0;
- (int)enabled;
- (void)setForceLiveInfo:(id)a0;
- (id)forceLiveInfo;
- (void)setLinkVisible:(int)a0;
- (int)linkVisible;
- (void)setPostStatus:(int)a0;
- (int)postStatus;

@end
