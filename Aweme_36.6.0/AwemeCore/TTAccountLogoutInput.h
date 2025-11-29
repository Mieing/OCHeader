@class NSString, NSDictionary;

@interface TTAccountLogoutInput : TTAccountCommonModel

@property (retain, nonatomic) NSString *fromUrlPath;
@property (retain, nonatomic) NSString *fromLogId;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (nonatomic) long long logoutScene;

- (void).cxx_destruct;

@end
