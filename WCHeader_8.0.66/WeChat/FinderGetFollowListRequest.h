@class BaseRequest, NSString, NSData, FinderBaseRequest;

@interface FinderGetFollowListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;

+ (void)initialize;

@end
