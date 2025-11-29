@class BaseRequest, NSMutableArray;

@interface GetAppInfoListRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int count;
@property (retain, nonatomic) NSMutableArray *appIdList;

+ (void)initialize;

@end
