@class NSString;

@interface MMListenSingerInfo_JumpInfo : WXPBGeneratedMessage

@property (nonatomic) int jumpType;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *icon;
@property (nonatomic) unsigned long long finderUin;
@property (retain, nonatomic) NSString *finderNickname;
@property (retain, nonatomic) NSString *finderTag;
@property (retain, nonatomic) NSString *finderHeadimgurl;
@property (retain, nonatomic) NSString *finderSubtitle;

+ (void)initialize;

- (void)setFinderSubtitle:(id)a0;
- (id)finderSubtitle;
- (void)setFinderHeadimgurl:(id)a0;
- (id)finderHeadimgurl;
- (void)setFinderTag:(id)a0;
- (id)finderTag;
- (void)setFinderNickname:(id)a0;
- (id)finderNickname;
- (void)setFinderUin:(unsigned long long)a0;
- (unsigned long long)finderUin;
- (void)setIcon:(id)a0;
- (id)icon;
- (void)setQuery:(id)a0;
- (id)query;
- (void)setPath:(id)a0;
- (id)path;
- (void)setAppid:(id)a0;
- (id)appid;
- (void)setFinderUsername:(id)a0;
- (id)finderUsername;
- (void)setH5Url:(id)a0;
- (id)h5Url;
- (void)setJumpType:(int)a0;
- (int)jumpType;

@end
