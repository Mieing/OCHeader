@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderMusicAlbumUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int enterType;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSData *albumLastBuffer;
@property (retain, nonatomic) NSData *songlistLastBuffer;
@property (retain, nonatomic) NSData *feedLastBuffer;
@property (retain, nonatomic) NSData *sectionBuffer;

+ (void)initialize;

@end
