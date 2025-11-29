@class NSString, NSMutableArray;

@interface MMListenMusicAlbumInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long albumId;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *albumPic;
@property (retain, nonatomic) NSString *publicTime;
@property (retain, nonatomic) NSString *albumDesc;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *companyName;
@property (retain, nonatomic) NSString *genre;
@property (nonatomic) int isdigitalAlbum;
@property (retain, nonatomic) NSMutableArray *singerList;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSString *extH5Url;
@property (nonatomic) unsigned int musicNum;
@property (retain, nonatomic) NSString *albumCategoryId;
@property (nonatomic) unsigned long long publicTimeS;
@property (nonatomic) BOOL isPlayable;
@property (nonatomic) BOOL isFromWechat;

+ (void)initialize;

@end
