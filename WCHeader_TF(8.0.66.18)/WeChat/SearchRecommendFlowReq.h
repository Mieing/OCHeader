@class BaseRequest, NSString, NSData;

@interface SearchRecommendFlowReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *enterItemId;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned int direction;
@property (retain, nonatomic) NSData *extInfo;

+ (void)initialize;

@end
