@class NSString;

@interface TTARequestNewSessionModel : TTAUserModel

@property (copy, nonatomic) NSString *error_name;

+ (id)tta_modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
