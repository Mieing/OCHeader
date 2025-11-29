@class AWEVideoPublishViewModel;

@interface ACCEditorSideslipPanelPicTemplateTracker : NSObject

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;

- (id)initWithPublishModel:(id)a0;
- (id)commonTrackInfo;
- (void)trackPicTemplateMiniBarShow;
- (void)trackSinglePicTemplateShowWith:(id)a0;
- (void)trackPicTemplateSelectEventWithTemplate:(id)a0 isClick:(BOOL)a1;
- (void)trackPicTemplateCancelEventWithTemplate:(id)a0 scene:(id)a1;
- (void).cxx_destruct;

@end
