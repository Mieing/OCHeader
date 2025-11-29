@class NSString;

@interface IESAccountPassportConnectModel : IESAccountPassportResponseModel

@property (readonly, nonatomic) unsigned long long platformEnumValue;
@property (copy, nonatomic) NSString *platformString;
@property (copy, nonatomic) NSString *profileURL;
@property (nonatomic) long long expiredTime;
@property (copy, nonatomic) NSString *platformScreenName;
@property (copy, nonatomic) NSString *platformUid;
@property (copy, nonatomic) NSString *userID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
