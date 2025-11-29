@class NSString;

@interface AWEInteractModularizationTextParamModel : IESIMBaseApiModel

@property (nonatomic) unsigned long long index;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *secName;
@property (nonatomic) BOOL needTruncation;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
