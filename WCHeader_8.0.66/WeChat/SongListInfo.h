@class NSString;

@interface SongListInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *singingSongName;
@property (nonatomic) BOOL hasLiveSongList;
@property (nonatomic) BOOL enableCreateLiveSongs;

+ (void)initialize;

@end
