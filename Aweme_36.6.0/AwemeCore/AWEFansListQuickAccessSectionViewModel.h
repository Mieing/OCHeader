@class NSDictionary;

@interface AWEFansListQuickAccessSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) NSDictionary *quickAccessInfo;
@property (nonatomic) double lynxViewHeight;

- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (void).cxx_destruct;

@end
