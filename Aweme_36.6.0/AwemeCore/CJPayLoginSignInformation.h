@class NSString;

@interface CJPayLoginSignInformation : JSONModel

@property (copy, nonatomic) NSString *logoURL;
@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *templateId;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;

@end
