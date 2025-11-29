@class WCStoryAlbumViewController, NSString, MMUnderlineTabsView, MMUIViewController, UISegmentedControl, UILabel, WCStoryHistoryViewController;

@interface WCStoryPostsViewController : MMUIViewController <WCActionSheetDelegate, MMNewTipsMgrExt>

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) MMUnderlineTabsView *underlineTabView;
@property (retain, nonatomic) UILabel *textStateLabel;
@property (retain, nonatomic) MMUIViewController *textStateViewController;
@property (retain, nonatomic) WCStoryHistoryViewController *storyViewController;
@property (retain, nonatomic) WCStoryAlbumViewController *albumViewController;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned long long defaultSelectedTag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithPostsScene:(unsigned int)a0 withRequestType:(unsigned int)a1;
- (id)initWithPostsScene:(unsigned int)a0 AndDefaultTag:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)setupViews;
- (void)configViewControllers;
- (void)clickSegmentedControl;
- (void)initNavTitleView;
- (void)onTabsViewValueChanged:(id)a0;
- (void)clickTimelineTab;
- (void)clickStoryTab;
- (void)onClikeTextStateMsg;
- (void)replaceFromViewController:(id)a0 toViewController:(id)a1;
- (void)onTipsShowInfoChangeWithPathKey:(id)a0;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
