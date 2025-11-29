@class BaseRequest, FinderGetPostRecommendTitleContext, NSData, FinderBaseRequest, NSString;

@interface FinderGetPostRecommendWordingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSData *seqBuffer;
@property (retain, nonatomic) FinderGetPostRecommendTitleContext *titleContext;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
