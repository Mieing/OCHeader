@class NSString, AWECodeGenCreateAwemeConfigModel;

@interface AWEPostCommentEvaluateResponse : AWEBaseApiModel

@property (nonatomic) long long canCreateAweme;
@property (copy, nonatomic) NSString *createAwemeToast;
@property (nonatomic) long long createAwemeToastType;
@property (retain, nonatomic) AWECodeGenCreateAwemeConfigModel *awemePublishConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
