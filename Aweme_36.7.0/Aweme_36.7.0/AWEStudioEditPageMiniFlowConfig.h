@class AWEStudioComposerEditPageMiniFlowNextConfig, AWEStudioComposerEditPageMiniFlowBackConfig;

@interface AWEStudioEditPageMiniFlowConfig : AWEStudioComposerBaseFeatureConfig

@property (retain, nonatomic) AWEStudioComposerEditPageMiniFlowBackConfig *back;
@property (retain, nonatomic) AWEStudioComposerEditPageMiniFlowNextConfig *next;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
