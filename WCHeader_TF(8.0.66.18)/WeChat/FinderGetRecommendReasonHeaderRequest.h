@class BaseRequest, FinderBaseRequest, NSString;

@interface FinderGetRecommendReasonHeaderRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *jumpInfoByPassInfo;
@property (nonatomic) unsigned int prefetchType;

+ (void)initialize;

@end
