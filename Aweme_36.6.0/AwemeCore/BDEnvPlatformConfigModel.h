@class NSString;

@interface BDEnvPlatformConfigModel : NSObject <NSCoding>

@property (readonly, nonatomic) NSString *envConfigSwimlane;
@property (readonly, nonatomic) long long envConfigType;
@property (nonatomic) BOOL enabledBOE2;

+ (id)envConfigTypeArray;
+ (long long)envConfigTypeFromEnvName:(id)a0;
+ (id)envNameFromType:(long long)a0;
+ (id)defaultModel;

- (id)initWithEnvConfigType:(long long)a0 Swimlane:(id)a1;
- (BOOL)isEqualToModelWithBOE2:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
