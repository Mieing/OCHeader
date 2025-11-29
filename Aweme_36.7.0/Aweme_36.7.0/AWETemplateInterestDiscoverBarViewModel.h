@class AWEInterestDiscoverBarBanModel, NSMutableDictionary, NSDateFormatter;

@interface AWETemplateInterestDiscoverBarViewModel : AWETemplateBaseViewModel

@property (nonatomic) BOOL shouldShow;
@property (retain, nonatomic) AWEInterestDiscoverBarBanModel *banModel;
@property (retain, nonatomic) NSMutableDictionary *banModelDic;
@property (retain, nonatomic) NSDateFormatter *logDateFormatter;

+ (BOOL)disableInheritedForSpeedAndPlayTime;
+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldActiveWithData:(id)a0 context:(id)a1 scene:(unsigned long long)a2 extraInfo:(id)a3;
+ (long long)shouldActiveBarWithBarModel:(id)a0 context:(id)a1;
+ (BOOL)fixShowedArray;
+ (long long)barIgnoreMaxDays;
+ (long long)barShowMaxTimes;
+ (long long)barEncoreInterval;
+ (long long)shouldActiveBarWithBarModelForInterestID:(id)a0;
+ (long long)circleShowMixInterval;
+ (long long)circleIgnoreMaxTimes;
+ (long long)circleEncoreInterval;
+ (id)interestDiscoverSettings;

- (void)viewController_viewDidAppear;
- (id)commonParams;
- (void)viewDidTriggerAction:(unsigned long long)a0;
- (id)interestID;
- (void)checkDataValid;
- (void)trackForTemplateViewShow;
- (void)trackForTemplateViewClick;
- (void)recoverSpeedIfNeeds;
- (void)recordForSpeedInheritedIfNeedsWithSpeed:(id)a0;
- (void)viewController_viewWillDisplay;
- (void)didClickInterestDiscoverBar;
- (void)storeBanModel;
- (void)recordBarShow;
- (void).cxx_destruct;
- (void)reset;

@end
