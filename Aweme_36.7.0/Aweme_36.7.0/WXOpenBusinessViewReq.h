@class NSString, NSData;

@interface WXOpenBusinessViewReq : BaseReq

@property (copy, nonatomic) NSString *businessType;
@property (copy, nonatomic) NSString *query;
@property (copy, nonatomic) NSString *extInfo;
@property (retain, nonatomic) NSData *extData;

+ (id)object;

- (void).cxx_destruct;

@end
