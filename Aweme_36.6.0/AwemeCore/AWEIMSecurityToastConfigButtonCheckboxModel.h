@class NSString;

@interface AWEIMSecurityToastConfigButtonCheckboxModel : AWEBaseApiModel

@property (nonatomic) BOOL selectValue;
@property (nonatomic) long long nextToast;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *reportValue;
@property (nonatomic) long long nextToastIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;

@end
