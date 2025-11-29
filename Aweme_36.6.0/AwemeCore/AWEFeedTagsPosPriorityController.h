@class AWEFeedTagsPriorityManager, NSPointerArray;

@interface AWEFeedTagsPosPriorityController : AWEPlayInteractionBaseController

@property (retain, nonatomic) AWEFeedTagsPriorityManager *tagsPriorityManager;
@property (retain, nonatomic) NSPointerArray *tagsElements;

- (void)updateAllSubViews;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLoad;

@end
