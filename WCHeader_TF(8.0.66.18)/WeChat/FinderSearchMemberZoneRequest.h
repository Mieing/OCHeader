@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderSearchMemberZoneRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *query;
@property (retain, nonatomic) NSData *lastBuffer;

+ (void)initialize;

@end
