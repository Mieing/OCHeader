@class MMUILabel, MMUIImageView, WCStoryTimelineEntranceTableViewCell, NSString, WCStoryReportUtil, NSMutableArray, WCStoryEntranceVM, NSNumber, MMUIButton;
@protocol WCTimelineLogicControllerDelegate;

@interface WCTimelineStoryLogicController : NSObject <IWCStoryEntranceVMExt, WCStoryTimelineEntranceTableViewCellDelegate, WCStoryFriendsCollectionViewControllerDelegate, WCTimelineLogicControllerImplProtocol>

@property (weak, nonatomic) id<WCTimelineLogicControllerDelegate> delegate;
@property (retain, nonatomic) MMUIButton *storyHeaderButton;
@property (retain, nonatomic) MMUIImageView *arrowImageView;
@property (retain, nonatomic) MMUILabel *countLabel;
@property (retain, nonatomic) MMUILabel *unreadTotalCountLabel;
@property (retain, nonatomic) WCStoryEntranceVM *entranceVM;
@property (retain, nonatomic) NSMutableArray *storyHeadImageViewArray;
@property (nonatomic) BOOL storyEntranceIsVisiable;
@property (retain, nonatomic) NSNumber *storyEntranceSwitch;
@property (nonatomic) unsigned long long unreadRelatedCommentCount;
@property (retain, nonatomic) WCStoryReportUtil *storyReportUtil;
@property (retain, nonatomic) WCStoryTimelineEntranceTableViewCell *storyCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)Reset;
- (void)Register;
- (unsigned int)headerSectionCntInMainController;
- (BOOL)shouldShowStoryCell;
- (void)setupStoryHeaderView;
- (void)openStoryNewEntrance;
- (void)updateUnreadTotalCommentCountLabel;
- (id)genHeadImageDataFromUnreadStoryData:(id)a0;
- (void)updateUnreadStoryHeadImageView:(id)a0;
- (void)reloadStoryConfigure;
- (void)reloadContactHasUnreadStory;
- (void)reloadStoryVMData;
- (void)updateUnreadStoryCountLabel:(id)a0;
- (void)reloadStoryCell;
- (void)bindStoryCell:(id)a0;
- (BOOL)friendVisitSwitchOn;
- (void)storyEntranceNeedReload;
- (void)StoryTimelineEntranceTableViewCellDidClickTopButton;
- (void)StoryTimelineEntranceTableViewCellDidClickClearButton;
- (void)clearStoryFriendsVideo;
- (void)recordStoryEntranceInfo;
- (BOOL)isStoryEntranceVisiable;
- (void)reportStoryVideoCleanExposeData;
- (void)reportStoryEntrance:(id)a0 unreadCount:(unsigned int)a1 unreadRelatedCommentCount:(unsigned int)a2;
- (void)recordExposure;
- (void)resetVisiableState;
- (void)reloadConfigAndSetupEntranceView;
- (void)resetContentInset;
- (void)scrollToTopIfNeeded:(unsigned long long)a0;
- (void)onScrollViewDidScroll:(id)a0;
- (void)showMultiContactPreviewViewController:(id)a0 dismissVC:(id)a1;
- (BOOL)shouldUseBlackStatusBar:(id)a0;
- (void).cxx_destruct;

@end
