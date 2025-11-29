@class NSString, FinderMVInfo_FinderMVSongInfo_FinderMVSongOperationInfo;

@interface FinderMVInfo_FinderMVSongInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSString *singer;
@property (retain, nonatomic) NSString *musicDataUrl;
@property (retain, nonatomic) NSString *musicAppid;
@property (retain, nonatomic) NSString *musicWeburl;
@property (retain, nonatomic) NSString *songId;
@property (retain, nonatomic) NSString *lyric;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *albumUrl;
@property (retain, nonatomic) NSString *genre;
@property (retain, nonatomic) NSString *publicTime;
@property (nonatomic) unsigned long long publicTimeS;
@property (retain, nonatomic) NSString *extraInfo;
@property (retain, nonatomic) NSString *identification;
@property (nonatomic) unsigned int duration;
@property (nonatomic) BOOL copyright;
@property (retain, nonatomic) NSString *androidDownloadUrl;
@property (retain, nonatomic) FinderMVInfo_FinderMVSongInfo_FinderMVSongOperationInfo *operationInfo;
@property (retain, nonatomic) NSString *mid;

+ (void)initialize;

@end
