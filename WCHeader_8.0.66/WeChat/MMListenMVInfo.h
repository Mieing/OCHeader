@class NSString, MMListenUserInfo;

@interface MMListenMVInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singer;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *singerPic;
@property (retain, nonatomic) NSString *musicAppid;
@property (retain, nonatomic) NSString *musicWeburl;
@property (retain, nonatomic) NSString *musicMid;
@property (retain, nonatomic) MMListenUserInfo *finderMusician;

+ (void)initialize;

- (void)setFinderMusician:(id)a0;
- (id)finderMusician;
- (void)setMusicMid:(id)a0;
- (id)musicMid;
- (void)setMusicWeburl:(id)a0;
- (id)musicWeburl;
- (void)setMusicAppid:(id)a0;
- (id)musicAppid;
- (void)setSingerPic:(id)a0;
- (id)singerPic;
- (void)setDuration:(int)a0;
- (int)duration;
- (void)setCover:(id)a0;
- (id)cover;
- (void)setSinger:(id)a0;
- (id)singer;
- (void)setSongName:(id)a0;
- (id)songName;
- (void)setNonceId:(id)a0;
- (id)nonceId;
- (void)setTid:(id)a0;
- (id)tid;
- (void)setUrl:(id)a0;
- (id)url;

@end
