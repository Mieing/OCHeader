@class NSString, NSMutableArray;

@interface AWESearchAlienatedTabExitInfo : AWEBaseApiModel

@property (retain, nonatomic) NSMutableArray *shownDays;
@property (retain, nonatomic) NSMutableArray *noClickShownDays;
@property (retain, nonatomic) NSMutableArray *shownDaysWithBackDays;
@property (retain, nonatomic) NSMutableArray *noClickShownDaysWithBackDays;
@property (retain, nonatomic) NSString *exitDate;
@property (retain, nonatomic) NSString *noClickExitDate;
@property (retain, nonatomic) NSString *lastClickedDate;

+ (id)shownDaysJSONTransformer;
+ (id)noClickShownDaysJSONTransformer;
+ (id)shownDaysWithBackDaysJSONTransformer;
+ (id)noClickShownDaysWithBackDaysJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
