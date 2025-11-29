@class NSString, FinderMusicFriendData, FinderContact, FinderLiteAppParam;

@interface FinderSingerInfo : WXPBGeneratedMessage

@property (retain, nonatomic) FinderContact *contact;
@property (nonatomic) unsigned int enableClickAuthor;
@property (retain, nonatomic) NSString *h5Url;
@property (retain, nonatomic) FinderMusicFriendData *friendData;
@property (retain, nonatomic) FinderLiteAppParam *liteAppParam;

+ (void)initialize;

@end
