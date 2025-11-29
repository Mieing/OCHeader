@class NSString;

@interface AWECodeGenDiverseDiggModelModel : AWEBaseDataModel

@property (nonatomic) long long actionId;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *text;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
