@class BaseRequest, NSString, NSMutableArray;

@interface SetSettingReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSMutableArray *list;

+ (void)initialize;

@end
