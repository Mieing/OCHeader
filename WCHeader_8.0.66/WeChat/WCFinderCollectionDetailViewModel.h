@class NSString, NSArray, WCFinderCollectionDataFetcher, WCFinderDetailTimeStringConfig, FinderCollectionInfo, NSMutableArray, FinderCollectionErrPage, NSDiffableDataSourceSnapshot;
@protocol WCFinderCollectionDetailViewModelDelegate;

@interface WCFinderCollectionDetailViewModel : NSObject

@property (copy, nonatomic) NSString *authorUsername;
@property (retain, nonatomic) FinderCollectionInfo *collectionInfo;
@property (retain, nonatomic) FinderCollectionErrPage *collectionErrPage;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSMutableArray *sectionsHeight;
@property (retain, nonatomic) WCFinderCollectionDataFetcher *fetcher;
@property (nonatomic) unsigned long long fetcherStatus;
@property (retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig;
@property (weak, nonatomic) id<WCFinderCollectionDetailViewModelDelegate> delegate;
@property (readonly, nonatomic) NSDiffableDataSourceSnapshot *snapshot;

+ (id)finderCollectionInfoForShareItem:(id)a0;

- (id)initWithShareItem:(id)a0;
- (id)initWithCollectionInfo:(id)a0 authorUsername:(id)a1;
- (void)_setup;
- (void)fetchFeedList;
- (void)_afterFetchData:(BOOL)a0;
- (id)contentVMAtIndexPath:(id)a0;
- (void)_onFeedArray:(id)a0;
- (void)_updateCollectionInfo:(id)a0;
- (id)sectionHeightDimensionForIndex:(long long)a0 layoutEnvironment:(id)a1;
- (BOOL)isSmartCollection;
- (id)_generateNewSections;
- (id)_headerSection;
- (id)_actionSection;
- (id)_smartCollectionTipsSection;
- (id)_loadingSection;
- (id)_feedItemSection;
- (id)_footerSection;
- (id)reportParams;
- (void).cxx_destruct;

@end
