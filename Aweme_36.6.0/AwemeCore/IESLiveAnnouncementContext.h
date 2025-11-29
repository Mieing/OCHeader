@class UIViewController, IGListAdapter, IESLiveAnnouncementViewModel;

@interface IESLiveAnnouncementContext : NSObject

@property (weak, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) IESLiveAnnouncementViewModel *viewModel;
@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) long long initialSelectedAnnouncementID;

- (void).cxx_destruct;

@end
