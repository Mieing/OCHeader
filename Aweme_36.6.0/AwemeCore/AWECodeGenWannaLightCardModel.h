@class NSString;

@interface AWECodeGenWannaLightCardModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *feData;
@property (nonatomic) double cardRatio;
@property (nonatomic) long long index;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *modelID;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
