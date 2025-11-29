@class NSError, NSDictionary;

@interface TTAccountLogoutResult : TTAccountCommonModel

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long logoutScene;
@property (retain, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *data;

- (void).cxx_destruct;

@end
