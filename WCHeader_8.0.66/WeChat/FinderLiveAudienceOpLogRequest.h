@class BaseRequest, FinderBaseRequest, NSMutableArray;

@interface FinderLiveAudienceOpLogRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *cmdList;

+ (void)initialize;

@end
