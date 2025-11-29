@class NSString;

@interface BDUGLuckyTimerPendantStateContent : BDUGLuckyJSONModel

@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *stateDesc;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *extra;

- (void).cxx_destruct;

@end
