@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderAdUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (nonatomic) unsigned long long maxId;
@property (retain, nonatomic) NSString *firstPageMd5;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned int needFansCount;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int enterType;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned long long firstObjectId;
@property (retain, nonatomic) NSString *encryptedObjectid;

+ (void)initialize;

@end
