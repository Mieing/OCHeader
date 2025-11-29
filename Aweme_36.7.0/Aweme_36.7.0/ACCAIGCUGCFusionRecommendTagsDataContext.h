@class NSString;

@interface ACCAIGCUGCFusionRecommendTagsDataContext : NSObject

@property (nonatomic) double tagHeight;
@property (nonatomic) long long rowNumbers;
@property (nonatomic) long long selectMaxCount;
@property (copy, nonatomic) NSString *aigcCreateWay;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *editAIGCCreateWay;
@property (nonatomic) unsigned long long enterType;

- (void)setupInitialConfig;
- (void)updateConfigToCollapsedStyle;
- (void)updateConfigToNormalStyle;
- (void).cxx_destruct;

@end
