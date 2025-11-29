@class BaseRequest, FinderBaseRequest;

@interface FinderGetUpLevelProductRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int targetLevel;
@property (nonatomic) BOOL useForLottery;

+ (void)initialize;

@end
