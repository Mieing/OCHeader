@class BaseRequest, NSString, NSMutableArray;

@interface GetSettingReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSMutableArray *key;

+ (void)initialize;

@end
