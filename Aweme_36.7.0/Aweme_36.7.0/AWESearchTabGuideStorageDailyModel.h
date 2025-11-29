@class NSMutableDictionary;

@interface AWESearchTabGuideStorageDailyModel : AWEBaseApiModel

@property (nonatomic) long long startTimeinterval;
@property (nonatomic) long long totalShowNum;
@property (retain, nonatomic) NSMutableDictionary *showNumMap;

+ (id)JSONKeyPathsByPropertyKey;

- (void)showWithTabType:(id)a0;
- (long long)showNumWithTabType:(id)a0;
- (void).cxx_destruct;
- (void)resetData;

@end
