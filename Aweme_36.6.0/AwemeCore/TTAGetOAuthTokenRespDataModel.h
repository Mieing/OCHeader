@class NSString;

@interface TTAGetOAuthTokenRespDataModel : TTADataRespModel

@property (copy, nonatomic) NSString *access_token;
@property (copy, nonatomic) NSString *expires_in;
@property (copy, nonatomic) NSString *open_id;
@property (copy, nonatomic) NSString *refresh_expires_in;
@property (copy, nonatomic) NSString *refresh_token;
@property (copy, nonatomic) NSString *scopes;
@property (nonatomic) long long refresh_time;

- (void).cxx_destruct;

@end
