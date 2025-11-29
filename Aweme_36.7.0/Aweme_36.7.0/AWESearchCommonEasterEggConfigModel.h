@class NSString;

@interface AWESearchCommonEasterEggConfigModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (nonatomic) long long loopTimes;
@property (nonatomic) double autoplayTime;
@property (nonatomic) double containerWidth;
@property (nonatomic) double containerHeight;
@property (copy, nonatomic) NSString *eggID;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) double containerMargin;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
