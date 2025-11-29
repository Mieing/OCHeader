@class MMListenSearchResultSinger, MMListenSearchResultNonMusic, MMListenSearchResultGenre, BaseResponse, MMListenSearchResultMpUser, NSMutableArray, MMListenSearchResultMusic, NSString, MMListenSearchResultClassicWorks, MMListenSearchResultFinderVoice, MMListenSearchResultMusicAlbum, NSData, MMListenSearchResultPlaylist;

@interface MMListenSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) MMListenSearchResultMusic *music;
@property (retain, nonatomic) MMListenSearchResultSinger *singer;
@property (retain, nonatomic) MMListenSearchResultMusicAlbum *musicAlbum;
@property (retain, nonatomic) MMListenSearchResultNonMusic *nonMusic;
@property (retain, nonatomic) MMListenSearchResultMpUser *mpUser;
@property (retain, nonatomic) MMListenSearchResultPlaylist *playlist;
@property (retain, nonatomic) MMListenSearchResultGenre *genre;
@property (retain, nonatomic) MMListenSearchResultFinderVoice *finderVoice;
@property (retain, nonatomic) MMListenSearchResultClassicWorks *classicWorks;
@property (retain, nonatomic) NSMutableArray *lines;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *listenReportInfo;
@property (retain, nonatomic) NSString *searchReportInfo;

+ (void)initialize;

@end
