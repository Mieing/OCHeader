@class NSString;

@interface DYAPushResultModel : DYAPassportResponseModel

@property (copy, nonatomic) NSString *status;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)pushResultState;
- (void).cxx_destruct;

@end
