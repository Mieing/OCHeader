@class AWEHPTabGuideLabelCandidate, NSString, AWETemplateTagsModel, AWETemplateTagsContext, AWEHPTabGuideComponentInfo;

@interface AWEHPFeedTabGuideLabelStrategy : NSObject <AWETemplateTagsStrategyProtocol>

@property (retain, nonatomic) AWEHPTabGuideLabelCandidate *bindCandidate;
@property (retain, nonatomic) AWEHPTabGuideComponentInfo *componentInfo;
@property (retain, nonatomic) AWETemplateTagsModel *model;
@property (retain, nonatomic) AWETemplateTagsContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)activeInfo;
+ (id)tryGetBindCandidateWithModel:(id)a0 context:(id)a1 isPreCheck:(BOOL)a2;
+ (void)prepareWithModel:(id)a0 context:(id)a1;
+ (BOOL)shouldHandleReplaceTriggerEvent:(id)a0;
+ (BOOL)shouldActiveWithModel:(id)a0 context:(id)a1;

- (id)initWithModel:(id)a0 context:(id)a1;
- (void)viewController_willDisplay;
- (id)extraTrackParams;
- (void)p_reset;
- (void)didClickWithEvent:(id)a0;
- (void)didTriggerEvent:(id)a0;
- (BOOL)p_clickAble;
- (void).cxx_destruct;
- (long long)templateType;
- (void)reset;
- (void)dealloc;

@end
