@class NSString, NSArray;

@interface AWEIMSecurityToastConfigButtonModel : AWEBaseApiModel

@property (nonatomic) long long buttonType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSArray *checkbox;
@property (copy, nonatomic) NSString *reportValue;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) long long nextToastIndex;
@property (nonatomic) BOOL highlight;
@property (nonatomic) BOOL requireOptionSelected;

+ (id)checkboxJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
