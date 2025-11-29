@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderBatchGetMentionInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *mentionIdList;
@property (nonatomic) unsigned int requestScene;

+ (void)initialize;

@end
