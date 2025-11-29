@class NSString;

@interface AWEPassportCheckPasswordHasSetModel : DYAPassportResponseModel

@property (copy, nonatomic) NSString *resultString;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)hasSetPassword;
- (void).cxx_destruct;

@end
