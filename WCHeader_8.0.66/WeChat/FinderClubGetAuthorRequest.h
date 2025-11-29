@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderClubGetAuthorRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long clubId;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
