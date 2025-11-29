@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderLiveSensitiveWordManageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (nonatomic) int opType;
@property (retain, nonatomic) NSMutableArray *sensitiveWord;
@property (retain, nonatomic) NSString *finderUsername;

+ (void)initialize;

@end
