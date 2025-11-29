@class NSString, NSDictionary, NSMutableDictionary, ACCMeasureOnceItem;

@interface ACCMeasureComponent : ACCFeatureComponent

@property (readonly, nonatomic) NSString *prefixString;
@property (retain, nonatomic) NSDictionary *vcLifeCycleStageToItemMap;
@property (retain, nonatomic) NSMutableDictionary *customReportData;
@property (retain, nonatomic) ACCMeasureOnceItem *viewControllerInitItem;
@property (retain, nonatomic) ACCMeasureOnceItem *viewDidLoadStartItem;
@property (retain, nonatomic) ACCMeasureOnceItem *viewDidLoadEndItem;
@property (retain, nonatomic) ACCMeasureOnceItem *viewWillAppearItem;
@property (retain, nonatomic) ACCMeasureOnceItem *viewDidAppearItem;
@property (nonatomic) BOOL didReportViewControllerLifeCycleData;
@property (copy, nonatomic) NSString *customPrefixString;
@property (copy, nonatomic) NSDictionary *extraData;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (double)p_currentTimeInterval;
- (void)postViewControllerLifeCycleData;
- (id)getReportKeyForBeginString:(id)a0 endString:(id)a1;
- (id)getViewControllerLifeCycleData;
- (id)defaultPrefixString;
- (void)setLifeCycleDataForDictionary:(id)a0 beginMeasureItem:(id)a1 endMeasureItem:(id)a2;
- (id)getReportKeyForBeginMeasureItem:(id)a0 endMeasureItem:(id)a1;
- (double)getTimeIntervalForBeginMeasureItem:(id)a0 endMeasureItem:(id)a1;
- (void)recordTimeIntervalWithSuffixName:(id)a0 timeInterval:(double)a1 relateToLifeCycleStage:(unsigned long long)a2;
- (void)setLifeCycleDataForDictionary:(id)a0 suffixName:(id)a1 beginTimeInterval:(double)a2 endTimeInterval:(double)a3;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
