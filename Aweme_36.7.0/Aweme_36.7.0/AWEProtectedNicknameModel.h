@class NSString;

@interface AWEProtectedNicknameModel : AWEBaseApiModel

@property (nonatomic) BOOL hasRight;
@property (retain, nonatomic) NSString *protectNickname;
@property (nonatomic) unsigned long long reviewStatus;
@property (retain, nonatomic) NSString *protectNickNamePageDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
