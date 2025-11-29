@class NSString;

@interface AWECodeGenKnowledgePointModel : AWEBaseDataModel

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *knowledge;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
