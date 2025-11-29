@class NSString;

@interface FinderLiveMusicInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int songId;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singerName;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *albumPicUrl;
@property (retain, nonatomic) NSString *genre;
@property (nonatomic) BOOL playable;
@property (retain, nonatomic) NSString *songPlayUrl;
@property (retain, nonatomic) NSString *publicTime;
@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) unsigned int songType;
@property (nonatomic) BOOL isInBgMusicList;
@property (nonatomic) unsigned int duration;

+ (void)initialize;

@end
