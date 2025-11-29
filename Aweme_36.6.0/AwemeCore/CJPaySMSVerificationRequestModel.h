@class NSString;

@interface CJPaySMSVerificationRequestModel : JSONModel

@property (copy, nonatomic) NSString *phoneNumberText;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *qaURLString;
@property (copy, nonatomic) NSString *qaTitle;
@property (nonatomic) unsigned long long codeCount;
@property (nonatomic) long long countDownSeconds;
@property (nonatomic) unsigned long long animationType;
@property (nonatomic) BOOL usesCloseButton;
@property (copy, nonatomic) NSString *identify;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void)setAnimationTypeWithNSString:(id)a0;
- (void)setUsesCloseButtonWithNSString:(id)a0;
- (void).cxx_destruct;

@end
