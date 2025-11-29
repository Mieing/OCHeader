@class NSString;

@interface BGMInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL hasBgm;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singerName;
@property (retain, nonatomic) NSString *manualSongName;
@property (retain, nonatomic) NSString *manualSingerName;

+ (void)initialize;

@end
