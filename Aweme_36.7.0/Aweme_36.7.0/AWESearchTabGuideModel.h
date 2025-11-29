@class NSString, NSDictionary, AWESearchTabGuideExitRuleModel, AWESearchTabDemotionModel;

@interface AWESearchTabGuideModel : AWEBaseApiModel

@property (nonatomic) long long ID;
@property (copy, nonatomic) NSString *gid;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) BOOL clickable;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *tabType;
@property (copy, nonatomic) NSDictionary *tabGuideExtra;
@property (retain, nonatomic) AWESearchTabGuideExitRuleModel *exitRule;
@property (retain, nonatomic) AWESearchTabDemotionModel *demotion;
@property (weak, nonatomic) id badge;
@property (weak, nonatomic) id popover;
@property (nonatomic) BOOL popoverHideByOthers;
@property (nonatomic) BOOL isExit;
@property (nonatomic) BOOL isDemotion;
@property (nonatomic) BOOL isFrequencyLimit;
@property (nonatomic) BOOL isTabGuideExtraUsed;
@property (nonatomic) BOOL isHidden;

+ (id)exitRuleJSONTransformer;
+ (id)demotionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (BOOL)isShowing;
- (long long)showType;
- (id)showText;

@end
