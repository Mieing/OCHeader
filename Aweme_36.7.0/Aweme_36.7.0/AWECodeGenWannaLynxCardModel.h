@class NSString;

@interface AWECodeGenWannaLynxCardModel : AWEBaseDataModel

@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long index;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *serverData;
@property (nonatomic) long long cardType;
@property (nonatomic) double cardRatio;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
