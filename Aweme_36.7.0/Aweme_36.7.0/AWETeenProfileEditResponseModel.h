@class NSNumber, AWEUserModel, NSString;

@interface AWETeenProfileEditResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSNumber *toastBack;
@property (copy, nonatomic) NSString *verifyType;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
