@class NSString;

@interface AWEUnloginTeenmodeModel : AWEBaseApiModel

@property (nonatomic) BOOL teenModeEnabled;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) BOOL hasPassword;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
