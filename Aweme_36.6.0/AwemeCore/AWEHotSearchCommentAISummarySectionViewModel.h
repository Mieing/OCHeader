@interface AWEHotSearchCommentAISummarySectionViewModel : AWECommonFeedBaseSectionViewModel

@property (nonatomic) BOOL hasTracked;

- (void)trackShow;
- (void)trackClick;
- (void)configCellModels;
- (id)hotspotID;
- (id)getCommentGeneralModel;
- (id)viewpointModel;
- (id)p_getTrackerParams;
- (BOOL)isPlaceholder;

@end
