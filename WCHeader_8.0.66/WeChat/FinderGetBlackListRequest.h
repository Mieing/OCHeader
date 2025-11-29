@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetBlackListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSData *lastBuff;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;

+ (void)initialize;

@end
