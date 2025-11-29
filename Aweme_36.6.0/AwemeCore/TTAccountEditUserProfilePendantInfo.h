@class NSString;

@interface TTAccountEditUserProfilePendantInfo : TTAccountBaseEntity

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *color;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *currentPendant;

+ (unsigned long long)modelCustomMappingOptions;

- (void).cxx_destruct;

@end
