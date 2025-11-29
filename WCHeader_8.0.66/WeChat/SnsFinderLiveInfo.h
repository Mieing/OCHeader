@class NSString;

@interface SnsFinderLiveInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *finderObjectId;
@property (retain, nonatomic) NSString *finderNonceId;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *liveId;
@property (nonatomic) int liveStatus;
@property (retain, nonatomic) NSString *headUrl;

+ (void)initialize;

- (void)setHeadUrl:(id)a0;
- (id)headUrl;
- (void)setLiveStatus:(int)a0;
- (int)liveStatus;
- (void)setLiveId:(id)a0;
- (id)liveId;
- (void)setCoverUrl:(id)a0;
- (id)coverUrl;
- (void)setNickname:(id)a0;
- (id)nickname;
- (void)setFinderUsername:(id)a0;
- (id)finderUsername;
- (void)setFinderNonceId:(id)a0;
- (id)finderNonceId;
- (void)setFinderObjectId:(id)a0;
- (id)finderObjectId;

@end
