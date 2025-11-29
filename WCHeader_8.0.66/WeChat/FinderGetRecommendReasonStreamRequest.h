@class BaseRequest, NSString, NSData, FinderBaseRequest, FinderClientStatus;

@interface FinderGetRecommendReasonStreamRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *jumpInfoByPassInfo;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) FinderClientStatus *status;
@property (nonatomic) unsigned int prefetchType;

+ (void)initialize;

@end
