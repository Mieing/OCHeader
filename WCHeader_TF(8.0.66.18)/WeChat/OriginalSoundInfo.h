@class NSString;

@interface OriginalSoundInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singerName;
@property (retain, nonatomic) NSString *manualName;
@property (retain, nonatomic) NSString *songId;
@property (nonatomic) unsigned long long linkTytSongId;

+ (void)initialize;

- (void)setLinkTytSongId:(unsigned long long)a0;
- (unsigned long long)linkTytSongId;
- (void)setSongId:(id)a0;
- (id)songId;
- (void)setManualName:(id)a0;
- (id)manualName;
- (void)setSingerName:(id)a0;
- (id)singerName;
- (void)setSongName:(id)a0;
- (id)songName;
- (void)setTitle:(id)a0;
- (id)title;

@end
