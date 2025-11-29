@class AWETemplateTagsModel, NSString, AWETemplateTagsContext;

@interface AFDTemplateTagsBaseStrategy : NSObject <AWETemplateTagsStrategyProtocol>

@property (retain, nonatomic) AWETemplateTagsModel *model;
@property (retain, nonatomic) AWETemplateTagsContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeInfo;
+ (void)prepareWithModel:(id)a0 context:(id)a1;
+ (BOOL)shouldHandleReplaceTriggerEvent:(id)a0;
+ (id)clientBusinessID;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (id)initWithModel:(id)a0 context:(id)a1;
- (void)viewController_willDisplay;
- (void)viewController_viewDidAppear;
- (id)extraTrackParams;
- (void)didClickWithEvent:(id)a0;
- (void)didTriggerEvent:(id)a0;
- (void).cxx_destruct;
- (long long)templateType;
- (void)reset;
- (void)didInitialize;

@end
