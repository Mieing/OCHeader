@class NSArray;

@interface AWEDCFeedAutoPlayConfig : AWEDCFeedBaseConfig

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSArray *rules;
@property (nonatomic) unsigned long long activeAdditionScene;
@property (nonatomic) unsigned long long recaculateAdditionScene;
@property (copy, nonatomic) id /* block */ safeContentRectBlock;
@property (copy, nonatomic) id /* block */ shouldPreventDCAutoActionBlock;
@property (nonatomic) unsigned long long activeRatioType;
@property (nonatomic) double activeRatio;
@property (nonatomic) double activeRatioInDifferentType;
@property (nonatomic) double resignActiveRatioInDifferentType;
@property (copy, nonatomic) id /* block */ activeRatioBlock;
@property (copy, nonatomic) id /* block */ activeRatioInDifferentTypeBlock;
@property (copy, nonatomic) id /* block */ resignActiveRatioInDifferentTypeBlock;
@property (nonatomic) double shouldNotActiveHeight;
@property (copy, nonatomic) id /* block */ shouldNotActiveBlock;
@property (nonatomic) BOOL enableAutoPlayUpdate;

- (void)setupDefaultConfig;
- (void).cxx_destruct;

@end
