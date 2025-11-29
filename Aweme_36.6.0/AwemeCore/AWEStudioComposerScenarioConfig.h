@class AWEStudioComposerAlbumPageConfig, AWEStudioComposerEditPageConfig, AWEStudioComposerRecordPageConfig, AWEStudioComposerPublishPageConfig;
@protocol UIViewControllerTransitioningDelegate;

@interface AWEStudioComposerScenarioConfig : AWEStudioComposerBaseFeatureConfig

@property (retain, nonatomic) id<UIViewControllerTransitioningDelegate> customTransitionDelegate;
@property (retain, nonatomic) AWEStudioComposerRecordPageConfig *record;
@property (retain, nonatomic) AWEStudioComposerAlbumPageConfig *album;
@property (retain, nonatomic) AWEStudioComposerEditPageConfig *edit;
@property (retain, nonatomic) AWEStudioComposerPublishPageConfig *publish;
@property (copy, nonatomic) id /* block */ finishHandler;

- (id)initWithMode:(unsigned long long)a0;
- (void).cxx_destruct;

@end
