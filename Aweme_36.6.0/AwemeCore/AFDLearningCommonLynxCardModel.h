@class NSString, NSNumber;

@interface AFDLearningCommonLynxCardModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (copy, nonatomic) NSString *serverData;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
