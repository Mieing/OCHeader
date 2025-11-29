@class FinderUserPageSectionQAInfo;

@interface WCFinderProfileQAPageModel : WCFinderStreamProfilePageModel

@property (retain, nonatomic) FinderUserPageSectionQAInfo *qaInfo;

+ (int)tabId;
+ (id)overviewSectionTypes;

- (BOOL)shouldDisplayTab;
- (id)viewPageClassName;
- (id)displayName;
- (void)_updateQAOverviewSection;
- (void)requestPageData;
- (void).cxx_destruct;

@end
