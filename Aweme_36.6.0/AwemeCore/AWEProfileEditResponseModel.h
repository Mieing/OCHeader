@class AWEProfileEditResponseToastBackInfo, NSString, NSDictionary, NSNumber, AWEUserModel;

@interface AWEProfileEditResponseModel : AWEBaseApiModel

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSNumber *toastBack;
@property (copy, nonatomic) NSString *verifyType;
@property (retain, nonatomic) NSDictionary *dialog;
@property (retain, nonatomic) AWEProfileEditResponseToastBackInfo *toastBackInfo;

+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
