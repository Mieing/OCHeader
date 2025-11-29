@class NSString, NSDictionary;

@interface AWEFeedSearchLongBarWord : AWEBaseApiModel

@property (copy, nonatomic) NSString *word;
@property (copy, nonatomic) NSString *wordId;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *carouselTriggerTime;
@property (nonatomic) double carouselDateDiff;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
