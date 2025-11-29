@class NSString, NSDictionary;

@interface TTAccountWHAuthResp : TTAccountAuthResponse

@property (copy, nonatomic) NSString *certPwdData;
@property (copy, nonatomic) NSDictionary *resultItems;

- (void).cxx_destruct;

@end
