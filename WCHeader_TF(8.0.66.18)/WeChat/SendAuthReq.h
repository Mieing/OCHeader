@class NSString;

@interface SendAuthReq : BaseReq

@property (retain, nonatomic) NSString *scope;
@property (retain, nonatomic) NSString *state;

- (id)init;
- (void).cxx_destruct;

@end
