@class NSString;

@interface AWEUserVerifyPermissionModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *verificationName;
@property (copy, nonatomic) NSString *toastMessage;
@property (copy, nonatomic) NSString *toastURL;
@property (nonatomic) long long verifyNum;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
