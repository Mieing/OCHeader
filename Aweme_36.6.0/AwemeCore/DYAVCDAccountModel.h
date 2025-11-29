@class NSString, NSArray, AWEUserAccountCertInfoModel;

@interface DYAVCDAccountModel : DYAPassportResponseModel

@property (nonatomic) long long appID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *screenName;
@property (copy, nonatomic) NSArray *avatarURLs;
@property (copy, nonatomic) NSArray *urlLists;
@property (copy, nonatomic) NSString *nickName;
@property (nonatomic) long long fansCount;
@property (nonatomic) long long friendsCount;
@property (nonatomic) long long secret;
@property (copy, nonatomic) NSString *customVerify;
@property (copy, nonatomic) NSString *enterpriseVerify;
@property (nonatomic) long long verificationType;
@property (retain, nonatomic) AWEUserAccountCertInfoModel *accountCertInfo;
@property (nonatomic) BOOL isBusinessAccountOperator;
@property (copy, nonatomic) NSString *businessIdentityName;
@property (copy, nonatomic) NSString *relationUserToken;

+ (id)accountCertInfoJSONTransformer;
+ (id)userIDJSONTransformer;
+ (id)avatarURLsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
