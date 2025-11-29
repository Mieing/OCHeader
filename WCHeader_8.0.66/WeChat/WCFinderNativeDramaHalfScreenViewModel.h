@class WCFinderNativeDramaHalfScreenViewControllerParams, NSArray, NSString, NSDiffableDataSourceSnapshot, NativeDramaEpisodeRanges, FinderNativeDramaInfo, WCFinderNativeDramaDetailCGI;
@protocol WCFinderNativeDramaHalfScreenViewModelDelegate;

@interface WCFinderNativeDramaHalfScreenViewModel : NSObject

@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) NSArray *episodeRangeList;
@property (retain, nonatomic) NativeDramaEpisodeRanges *selectedRange;
@property (nonatomic) unsigned long long selectedEpisodeID;
@property (retain, nonatomic) WCFinderNativeDramaDetailCGI *detailCGI;
@property (nonatomic) BOOL isFetching;
@property (copy, nonatomic) NSString *errorTips;
@property (retain, nonatomic) WCFinderNativeDramaHalfScreenViewControllerParams *params;
@property (weak, nonatomic) id<WCFinderNativeDramaHalfScreenViewModelDelegate> delegate;
@property (readonly, nonatomic) FinderNativeDramaInfo *dramaInfo;

- (id)initWithParams:(id)a0;
- (void)setup;
- (void)_updateSection;
- (id)_headerSection;
- (id)_rangeSection;
- (id)_episodeSection;
- (id)_loadingSection;
- (void)updateWithParams:(id)a0;
- (void)switchToRange:(id)a0;
- (void)_fetchItems;
- (void).cxx_destruct;

@end
