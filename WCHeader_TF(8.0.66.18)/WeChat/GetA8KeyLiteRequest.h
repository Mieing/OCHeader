@class BaseRequest, NSString, NSMutableArray;

@interface GetA8KeyLiteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int batchCount;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int reason;
@property (nonatomic) unsigned int fontScale;
@property (retain, nonatomic) NSString *netType;
@property (retain, nonatomic) NSString *outerUrl;
@property (nonatomic) unsigned int subScene;
@property (retain, nonatomic) NSMutableArray *reqInfo;
@property (retain, nonatomic) NSMutableArray *prefetchDomainInfos;

+ (void)initialize;

@end
