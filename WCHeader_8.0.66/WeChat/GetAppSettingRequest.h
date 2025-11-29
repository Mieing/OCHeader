@class BaseRequest, NSMutableArray;

@interface GetAppSettingRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int appCount;
@property (retain, nonatomic) NSMutableArray *appSettingReqList;

+ (void)initialize;

@end
