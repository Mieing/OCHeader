@class BaseRequest, NSMutableArray;

@interface BatchBindTagsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *bindRequestList;

+ (void)initialize;

@end
