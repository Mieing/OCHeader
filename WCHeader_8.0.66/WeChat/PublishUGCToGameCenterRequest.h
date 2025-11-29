@class BaseRequest, NSMutableArray, NSString;

@interface PublishUGCToGameCenterRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int source;
@property (retain, nonatomic) NSMutableArray *mediaList;
@property (retain, nonatomic) NSString *businessData;
@property (retain, nonatomic) NSString *taskId;

+ (void)initialize;

@end
