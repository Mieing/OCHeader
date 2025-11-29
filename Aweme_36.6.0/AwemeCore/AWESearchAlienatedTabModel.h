@class NSString, AWESearchAlienatedTabExitRuleModel;

@interface AWESearchAlienatedTabModel : AWEBaseApiModel

@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *normalImgUrl;
@property (copy, nonatomic) NSString *colorImgUrl;
@property (copy, nonatomic) NSString *colorSelectedImgUrl;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *lineColor;
@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSString *wordsContent;
@property (retain, nonatomic) AWESearchAlienatedTabExitRuleModel *exitRule;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
