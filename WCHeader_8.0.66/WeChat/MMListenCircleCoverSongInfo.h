@class NSString;

@interface MMListenCircleCoverSongInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *playUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) unsigned int beginTime;
@property (nonatomic) unsigned int endTime;
@property (retain, nonatomic) NSString *lyric;
@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *nonVocalUrl;

+ (void)initialize;

@end
