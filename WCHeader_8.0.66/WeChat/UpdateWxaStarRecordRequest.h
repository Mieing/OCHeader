@class BaseRequest, NSMutableArray;

@interface UpdateWxaStarRecordRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int reason;
@property (retain, nonatomic) NSMutableArray *operList;

+ (void)initialize;

@end
