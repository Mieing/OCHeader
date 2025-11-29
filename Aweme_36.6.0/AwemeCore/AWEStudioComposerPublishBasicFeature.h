@class AWEStudioComposerPublishPreview, AWEStudioComposerPublishAnchorService, AWEStudioComposerPublishBasicListTemplate;

@interface AWEStudioComposerPublishBasicFeature : AWEStudioComposerPublishRequiredFeature

@property (readonly, nonatomic) AWEStudioComposerPublishBasicListTemplate *listTemplate;
@property (readonly, nonatomic) AWEStudioComposerPublishAnchorService *anchorService;
@property (readonly, nonatomic) AWEStudioComposerPublishPreview *preview;

- (void).cxx_destruct;

@end
