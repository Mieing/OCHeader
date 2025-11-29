@class BaseRequest, NSMutableArray;

@interface EcsBatchGetLiveInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *exportIdList;

+ (void)initialize;

@end
