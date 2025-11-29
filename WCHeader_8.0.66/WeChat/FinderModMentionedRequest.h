@class BaseRequest, NSString, FinderBaseRequest, NSMutableArray;

@interface FinderModMentionedRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int optype;
@property (retain, nonatomic) NSString *finderUsername;
@property (retain, nonatomic) NSMutableArray *objectId;
@property (retain, nonatomic) FinderBaseRequest *finderBasereq;
@property (retain, nonatomic) NSMutableArray *modmentionedInfo;

+ (void)initialize;

@end
