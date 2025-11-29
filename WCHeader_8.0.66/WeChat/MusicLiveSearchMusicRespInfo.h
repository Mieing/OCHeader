@class NSString, NSMutableArray;

@interface MusicLiveSearchMusicRespInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSMutableArray *singerNames;
@property (retain, nonatomic) NSString *musicDataUrl;
@property (retain, nonatomic) NSString *musicAppid;
@property (retain, nonatomic) NSString *musicWeburl;
@property (retain, nonatomic) NSString *albumCoverUrl;
@property (nonatomic) unsigned int durationMs;
@property (retain, nonatomic) NSString *identification;
@property (retain, nonatomic) NSString *mid;
@property (retain, nonatomic) NSString *songNameHitInfo;
@property (retain, nonatomic) NSString *singerHitInfo;
@property (nonatomic) unsigned int audioType;
@property (retain, nonatomic) NSString *lyric;

+ (void)initialize;

@end
