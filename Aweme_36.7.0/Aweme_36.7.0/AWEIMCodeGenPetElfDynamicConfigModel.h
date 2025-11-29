@class NSArray, NSString;

@interface AWEIMCodeGenPetElfDynamicConfigModel : AWEBaseDataModel

@property (nonatomic) long long beginTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSArray *consecutiveStateArray;
@property (copy, nonatomic) NSString *resource;
@property (copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSArray *actionArray;
@property (nonatomic) int status;
@property (nonatomic) long long duration;
@property (nonatomic) long long framecount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
