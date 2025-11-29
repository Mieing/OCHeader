@class NSString, AWEIMConversationContext, AWEIMCodeGenFeaturePanelActiveAnimationModel, AFDFrequencyCountRule;

@interface AWEIMPlayEntryGuideAnimExitHelper : NSObject

@property (retain, nonatomic) AWEIMCodeGenFeaturePanelActiveAnimationModel *animationModel;
@property (weak, nonatomic) AWEIMConversationContext *convContext;
@property (retain, nonatomic) AFDFrequencyCountRule *convClickRule;
@property (copy, nonatomic) NSString *convClickRuleKey;
@property (retain, nonatomic) AFDFrequencyCountRule *convShowRule;
@property (copy, nonatomic) NSString *convShowCountKey;
@property (retain, nonatomic) AFDFrequencyCountRule *totalShowRule;
@property (copy, nonatomic) NSString *totalShowCountKey;

+ (BOOL)didShowGuideAnimate;
+ (void)markShowGuideAnimate;

- (void)p_setup;
- (void)markClick;
- (void)markShow;
- (id)initWithExitModel:(id)a0 convContext:(id)a1;
- (BOOL)checkIfAvailable;
- (void).cxx_destruct;

@end
