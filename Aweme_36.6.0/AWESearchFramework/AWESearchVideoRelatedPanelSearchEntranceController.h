@class UIView;
@protocol AWESearchEntryElementProtocol;

@interface AWESearchVideoRelatedPanelSearchEntranceController : AWEPlayInteractionNewBaseController

@property (retain, nonatomic) UIView<AWESearchEntryElementProtocol> *searchEntryView;

- (void)addDiscoverEntranceViewIfNeed;
- (void)removeDiscoverEntranceView;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
