@class NSString;

@interface WXOpenBusinessViewReq : BaseReq

@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *extInfo;

+ (id)object;

- (void).cxx_destruct;

@end
