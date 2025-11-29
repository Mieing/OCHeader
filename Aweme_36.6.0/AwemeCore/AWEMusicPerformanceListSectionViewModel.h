@class NSString;

@interface AWEMusicPerformanceListSectionViewModel : AWEBaseListSectionViewModel

@property (copy, nonatomic) NSString *userId;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void)didClickPerformanceAtIndex:(long long)a0;
- (void)willDisplayPerformanceAtIndex:(long long)a0;
- (void).cxx_destruct;

@end
