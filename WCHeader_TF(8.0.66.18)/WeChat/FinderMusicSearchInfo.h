@class NSString, FinderMusicInfo;

@interface FinderMusicSearchInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderMusicInfo *musicInfo;
@property (retain, nonatomic) NSString *highlightSongName;
@property (retain, nonatomic) NSString *highlightArtist;
@property (retain, nonatomic) NSString *highlightAlbumName;

+ (void)initialize;

@end
