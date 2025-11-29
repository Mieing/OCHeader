@class BaseRequest, NSString, NSMutableArray;

@interface AdDynamicUpdateReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *snsId;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSMutableArray *reqDataList;

+ (void)initialize;

@end
