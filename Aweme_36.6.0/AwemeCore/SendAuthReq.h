@class NSString;

@interface SendAuthReq : BaseReq

@property (copy, nonatomic) NSString *scope;
@property (copy, nonatomic) NSString *state;
@property (nonatomic) BOOL isOption1;
@property (nonatomic) BOOL nonautomatic;
@property (copy, nonatomic) NSString *extData;

- (void).cxx_destruct;

@end
