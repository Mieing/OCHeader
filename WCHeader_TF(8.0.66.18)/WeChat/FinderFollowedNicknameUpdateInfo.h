@class NSString;

@interface FinderFollowedNicknameUpdateInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *followedWording;
@property (retain, nonatomic) NSString *cancelFollowWording;
@property (nonatomic) BOOL preloadMoreInfo;
@property (nonatomic) unsigned long long followedTime;

+ (void)initialize;

- (void)setFollowedTime:(unsigned long long)a0;
- (unsigned long long)followedTime;
- (void)setPreloadMoreInfo:(BOOL)a0;
- (BOOL)preloadMoreInfo;
- (void)setCancelFollowWording:(id)a0;
- (id)cancelFollowWording;
- (void)setFollowedWording:(id)a0;
- (id)followedWording;

@end
