@class NSNumber, NSArray;

@interface AWEQuickStoryGuideConfigModel : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *showDaysLimit;
@property (retain, nonatomic) NSNumber *dailyShowLimit;
@property (retain, nonatomic) NSNumber *intervalHours;
@property (retain, nonatomic) NSNumber *dislikeCloseLimitInSeconds;
@property (retain, nonatomic) NSNumber *dislikeShowDaysLimit;
@property (copy, nonatomic) NSArray *recommendActionSort;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
