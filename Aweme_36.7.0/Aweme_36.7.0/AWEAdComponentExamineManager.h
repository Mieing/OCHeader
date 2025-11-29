@class NSArray, NSTimer, AWEAwemeModel, AWEAdComponentExamineContext, NSMutableDictionary, NSString;
@protocol AWEAdComponentExamineBaseRule, AWECommerceComponentContext;

@interface AWEAdComponentExamineManager : HTSService <AWECommerceComponentProtocol, AWEAdComponentExamineManager>

@property (retain, nonatomic) AWEAdComponentExamineContext *context;
@property (retain, nonatomic) AWEAwemeModel *aweModel;
@property (retain, nonatomic) NSTimer *ruleHandleTimer;
@property (copy, nonatomic) NSArray<AWEAdComponentExamineBaseRule> *ruleArray;
@property (nonatomic) long long normalComponentCount;
@property (retain, nonatomic) NSMutableDictionary *reportInfos;
@property (nonatomic) BOOL isInPreprocessingPeriod;
@property (nonatomic) BOOL hasContainerAbnormality;
@property (weak, nonatomic) id<AWECommerceComponentContext> commerceContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowComponentWithContext:(id)a0;
+ (BOOL)enableComponentExamine;
+ (id)createManager;

- (id)ruleNameArray;
- (void)setupRule:(id)a0;
- (void)removeRuleForType:(long long)a0;
- (void)addComponent:(id)a0 logExtra:(id)a1 componentType:(unsigned long long)a2 currentViewBlock:(id /* block */)a3;
- (void)setOriginComponent:(id)a0;
- (void)turnDetection;
- (double)detectionInterval;
- (void)turnDetectionWithInterval:(double)a0;
- (void)detectNormalContainerViews;
- (void)sendReportInfo:(id)a0 subTitle:(id)a1;
- (id)reportKeyWithItems:(id)a0 reportType:(long long)a1;
- (id)viewInfo:(id)a0;
- (long long)maxRepeatTimes;
- (void)sendSnapshotHook:(id)a0 subTitle:(id)a1;
- (id)publicParameters;
- (BOOL)isInBlackListWithSubTitle:(id)a0;
- (id)reportBlackList;
- (id)getBlackList;
- (void)addComponent:(id)a0 logExtra:(id)a1;
- (void)setModel:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)willDisplay;

@end
