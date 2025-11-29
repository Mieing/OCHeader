@class FinderPaidCollectionInfo;

@interface MMFinderLivePaidCollectionAnchorPromoteInfo : MMFinderLiveAnchorPromoteInfo

@property (retain, nonatomic) FinderPaidCollectionInfo *paidCollectionInfo;

+ (id)createPaidCollectionInfoFrom:(id)a0;

- (id)promoteKey;
- (BOOL)shouldSkipReportOnPromoteManagerPanelStart;
- (void).cxx_destruct;

@end
