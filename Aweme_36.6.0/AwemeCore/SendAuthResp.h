@class NSString;

@interface SendAuthResp : BaseResp

@property (copy, nonatomic) NSString *code;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *lang;
@property (copy, nonatomic) NSString *country;

- (void).cxx_destruct;

@end
