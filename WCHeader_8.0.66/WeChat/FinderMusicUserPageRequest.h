@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderMusicUserPageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int enterType;
@property (retain, nonatomic) FinderClientStatus *status;

+ (void)initialize;

@end
