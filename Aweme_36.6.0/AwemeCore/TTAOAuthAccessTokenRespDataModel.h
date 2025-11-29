@class NSString;

@interface TTAOAuthAccessTokenRespDataModel : TTADataRespModel

@property (copy, nonatomic) NSString *access_token;
@property (nonatomic) long long expires_in;
@property (copy, nonatomic) NSString *refresh_token;
@property (nonatomic) long long refresh_expires_in;
@property (copy, nonatomic) NSString *open_id;
@property (copy, nonatomic) NSString *scopes;

- (void).cxx_destruct;

@end
