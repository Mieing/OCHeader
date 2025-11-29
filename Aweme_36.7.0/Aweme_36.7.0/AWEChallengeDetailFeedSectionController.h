@class NSObject, NSString, AWEAwemeModel;
@protocol AWEChallengeDetailFeedVCProtocol, AWELiveTopicStreamingManagerProtocol;

@interface AWEChallengeDetailFeedSectionController : AWEBaseFeedSectionController <AWEAwemeDetailTableViewControllerDelegate>

@property (retain, nonatomic) AWEAwemeModel *currentSelectedModel;
@property (retain, nonatomic) NSObject<AWELiveTopicStreamingManagerProtocol> *streamingManager;
@property (nonatomic) BOOL shouldShowCellTitleTitle;
@property (weak, nonatomic) id transitionContextProvider;
@property (weak, nonatomic) id<AWEChallengeDetailFeedVCProtocol> feedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)detailTableViewControllerWillScrollToPreviousItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewControllerWillScrollToNextItem:(id)a0 currentAwemeModel:(id)a1 targetIndex:(long long)a2;
- (void)detailTableViewController:(id)a0 scrollDidEndAtIndexPath:(id)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didBindSectionViewModel;
- (void)viewControllerDidAppear:(BOOL)a0;
- (void)viewControllerDidDisappear:(BOOL)a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)configSupplementaryHeaderView:(id)a0;
- (void)updateStreamingCellIfNeeded:(id)a0;
- (void)selectHeaderVideoAtIndex:(long long)a0;
- (void)multiColumnDidSelectItemAtIndex:(long long)a0 model:(id)a1;
- (id)targetModelInDetailViewController:(id)a0 targetIndex:(long long)a1;
- (void)appendModelFromDetailTableViewIfNeeded:(id)a0;
- (void)updateContainerOffsetWithDetailViewController:(id)a0 index:(long long)a1;
- (void)multiColumnShowVideoAtIndex:(long long)a0 model:(id)a1 logExtraInfo:(id)a2;
- (void)enterLiveRoomWithModel:(id)a0 challengeID:(id)a1;
- (void)showDetailTableViewController:(id)a0;
- (void).cxx_destruct;
- (id)sectionBackgroundColor;
- (Class)headerViewClass;

@end
