@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderSearchFansRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
