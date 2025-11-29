@class AWEDCFeedTabListConfig, NSMutableDictionary, NSString, UIViewController;
@protocol AWETabListHeaderViewControllerProtocol, AWEDCFeedTabListViewControllerDelegate;

@interface AWEDCFeedTabListViewController : AWEBaseTabListViewController <IESSegmentedControlDelegae, AWEDCFeedTabListViewControllerProtocol>

@property (retain, nonatomic) AWEDCFeedTabListConfig *tabConfig;
@property (weak, nonatomic) id<AWEDCFeedTabListViewControllerDelegate> delegate;
@property (retain, nonatomic) UIViewController<AWETabListHeaderViewControllerProtocol> *headerViewController;
@property (nonatomic) long long currentIndex;
@property (retain, nonatomic) NSMutableDictionary *itemVCs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabListHeaderViewController;
- (id)tabListItemViewControllerForModel:(id)a0 index:(long long)a1;
- (id)segmentedControlForTabList;
- (double)heightForSegmentedControl;
- (void)updateSegmentedControl:(id)a0 itemModelsArray:(id)a1 itemConfigsArray:(id)a2;
- (void)tabListContainerDidSelectItemAtIndex:(long long)a0 itemViewController:(id)a1 isByTap:(BOOL)a2;
- (void)segmentedControl:(id)a0 didTapAtIndex:(long long)a1;
- (BOOL)enableSegmentedControlForTabList;
- (void)setupTabListWithConfig:(id)a0;
- (id)containerViewBackgroundColor;
- (id)initWithTabConfig:(id)a0;
- (id)titleTextAttributesWithIsSelected:(BOOL)a0;
- (id)commonTrackParamsWithIndex:(long long)a0;
- (void)enterChannelContainer;
- (void)exitChannelContainerWithExitMethod:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
