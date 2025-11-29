@class MMListenSearchResultMusicAlbum, MMListenSearchResultNonMusic, NSString, MMListenSearchResultClassicWorks, MMListenSearchResultMusic, MMListenSearchResultMpUser, MMListenSearchResultFinderVoice, MMListenSearchResultSinger, MMListenSearchResultGenre, MMListenSearchResultPlaylist;

@interface MMListenSearchLine : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) MMListenSearchResultMusic *music;
@property (retain, nonatomic) MMListenSearchResultSinger *singer;
@property (retain, nonatomic) MMListenSearchResultMusicAlbum *musicAlbum;
@property (retain, nonatomic) MMListenSearchResultNonMusic *nonMusic;
@property (retain, nonatomic) MMListenSearchResultMpUser *mpUser;
@property (retain, nonatomic) MMListenSearchResultPlaylist *playlist;
@property (retain, nonatomic) MMListenSearchResultGenre *genre;
@property (retain, nonatomic) MMListenSearchResultFinderVoice *finderVoice;
@property (retain, nonatomic) MMListenSearchResultClassicWorks *classicWorks;
@property (retain, nonatomic) NSString *listenReportInfo;
@property (retain, nonatomic) NSString *searchReportInfo;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL hasMore;

+ (void)initialize;

@end
