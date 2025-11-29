@class FinderPoiStreamTabList_FinderPoiStreamTabItem, NSString, FinderPoiStreamNearbyInfo, NSMutableSet, WCFinderPOIParamsModel, NSMutableArray, NSData;
@protocol WCFinderPoiDetailViewModelDelegate;

@interface WCFinderPoiDetailViewModel : NSObject

@property (retain, nonatomic) WCFinderPOIParamsModel *params;
@property (retain, nonatomic) FinderPoiStreamTabList_FinderPoiStreamTabItem *tabInfo;
@property (nonatomic) int commentScene;
@property (retain, nonatomic) NSMutableArray *contentVMArray;
@property (retain, nonatomic) NSMutableSet *containedTidSet;
@property (nonatomic) BOOL isRequestingData;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) BOOL continueFlag;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *syncKey;
@property (nonatomic) BOOL nearbyFlag;
@property (retain, nonatomic) FinderPoiStreamNearbyInfo *nearbyInfo;
@property (weak, nonatomic) id<WCFinderPoiDetailViewModelDelegate> delegate;
@property (readonly, nonatomic) NSString *minimizeBizKey;

- (id)initWithPoiParams:(id)a0 tabInfo:(id)a1 DataArray:(id)a2 lastBuffer:(id)a3 continueFlag:(BOOL)a4 commentScene:(int)a5 syncKey:(id)a6;
- (unsigned long long)numberOfItem;
- (id)contentVMAtIndex:(long long)a0;
- (id)contentVMWithTid:(id)a0;
- (long long)indexOfTid:(id)a0;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (void)deleteContentVMWithIndex:(unsigned long long)a0;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void)updateState;
- (id)tranformDataItemArray:(id)a0;
- (void)addContainedTid:(id)a0;
- (id)filterDataArray:(id)a0;
- (void).cxx_destruct;

@end
