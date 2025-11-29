@class NSString;

@interface BDEnvGeckoConfigModel : NSObject <NSCoding>

@property (retain, nonatomic) NSString *geckoConfigSwimlane;
@property (nonatomic) long long geckoConfigType;

+ (id)geckoConfigTypeArray;
+ (long long)geckoConfigTypeFromEnvName:(id)a0;
+ (id)geckoNameFromType:(long long)a0;
+ (id)defaultModel;

- (id)initWithGeckoConfigType:(long long)a0 Swimlane:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqualToModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
