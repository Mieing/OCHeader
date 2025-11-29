@class AWEListenFeedFilterListContext;

@interface AWEListenFeedFilterListSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) AWEListenFeedFilterListContext *context;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (long long)modelsDiffType;
- (void).cxx_destruct;

@end
