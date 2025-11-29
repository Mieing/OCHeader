@class NSString, AWEPlayInteractionContext, AWEAwemeModel, AWERecommendEntryCoverView;

@interface AWERecommendEntryCoverViewController : UIViewController <AWERecommendEntryDelegate>

@property (retain, nonatomic) AWERecommendEntryCoverView *coverView;
@property (retain, nonatomic) AWEPlayInteractionContext *context;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupNotification;
- (void)closeButtonClicked:(id)a0;
- (void)recommendEntryExitEditMode:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)initUI;

@end
