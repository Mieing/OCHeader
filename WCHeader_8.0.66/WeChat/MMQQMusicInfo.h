@class NSString;

@interface MMQQMusicInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int songId;
@property (retain, nonatomic) NSString *songMid;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singerName;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *albumPic150X150;
@property (retain, nonatomic) NSString *albumPic300X300;
@property (retain, nonatomic) NSString *albumPic500X500;
@property (nonatomic) unsigned int songPlayTime;
@property (retain, nonatomic) NSString *songPlayUrl;
@property (retain, nonatomic) NSString *songPlayUrlHq;
@property (retain, nonatomic) NSString *songPlayUrlSq;
@property (retain, nonatomic) NSString *songPlayUrlStandard;
@property (retain, nonatomic) NSString *songH5Url;
@property (retain, nonatomic) NSString *songLyric;
@property (nonatomic) int copyright;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int songType;

+ (void)initialize;

@end
