@class NSString;

@interface AWECodeGenMateApplyMessageModel : AWEBaseDataModel

@property (nonatomic) long long userId;
@property (copy, nonatomic) NSString *message;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
