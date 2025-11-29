@class AWEChallengeDetailFeedSectionViewModel;

@interface AWEChallengeDetailBaseFeedViewModel : AWEBaseListViewModel

@property (retain) AWEChallengeDetailFeedSectionViewModel *feedSectionViewModel;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)trackPreviewingFeedItemWithModel:(id)a0;
- (void).cxx_destruct;

@end
