@class FinderPoiStreamTabList_FinderPoiStreamTabItem, NSString, FinderPoiStreamNearbyInfo, NSData, WCFinderPOIParamsModel, NSMutableArray, NSMutableSet;
@protocol WCFinderPoiPageViewModelDelegate;

@interface WCFinderPoiPageViewModel : NSObject <WCFinderPoiStreamExt>

@property (retain, nonatomic) WCFinderPOIParamsModel *params;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) FinderPoiStreamTabList_FinderPoiStreamTabItem *tabInfo;
@property (nonatomic) unsigned long long filterIndex;
@property (nonatomic) unsigned long long tabIndex;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) unsigned long long refreshTime;
@property (retain, nonatomic) NSString *syncKey;
@property (retain, nonatomic) NSMutableArray *contentVMArray;
@property (retain, nonatomic) NSMutableArray *currentVMArray;
@property (retain, nonatomic) NSMutableArray *nearbyVMArray;
@property (retain, nonatomic) NSMutableSet *containedTidSet;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL nearbyFlag;
@property (retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo;
@property (copy, nonatomic) NSString *nearbyWording;
@property (nonatomic) unsigned long long prefetchCount;
@property (weak, nonatomic) id<WCFinderPoiPageViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPoiParams:(id)a0 tabInfo:(id)a1 tabIndex:(unsigned long long)a2 filterIndex:(unsigned long long)a3 DataArray:(id)a4 lastBuffer:(id)a5 continueFlag:(BOOL)a6 commentScene:(int)a7 nearbyFlag:(BOOL)a8 nearbyInfo:(id)a9 prefetchCount:(unsigned long long)a10;
- (void)requestFirstPageDataWithCompletion:(id /* block */)a0;
- (void)requestNextPageDataWithCompletion:(id /* block */)a0;
- (void)requestDataWithPullType:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)tranformDataItemArray:(id)a0;
- (void)addContainedTid:(id)a0;
- (id)filterDataArray:(id)a0;
- (void)updateState;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)a0;
- (id)contentVMAtIndexPath:(id)a0;
- (id)indexPathForContentVMTid:(id)a0;
- (unsigned long long)offsetAtIndexPath:(id)a0;
- (BOOL)isCustomSupplementaryViewOfKind:(id)a0 atSection:(long long)a1;
- (void)onFinderPoiStreamReloadAllData:(id)a0 nearbyFlag:(BOOL)a1 nearbyInfo:(id)a2;
- (void)onFinderPoiStreamAppendData:(id)a0 nearbyFlag:(BOOL)a1 nearbyInfo:(id)a2;
- (id)filterInfo;
- (unsigned int)filterType;
- (void).cxx_destruct;

@end
