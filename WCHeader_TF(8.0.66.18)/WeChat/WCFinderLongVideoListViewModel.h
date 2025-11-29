@class NSString, NSMutableDictionary, NSData, WCFinderFeedArray, AnyPromise;
@protocol WCFinderLongVideoListViewModelDelegate;

@interface WCFinderLongVideoListViewModel : NSObject <WCFinderSeeLaterExt>

@property (nonatomic) BOOL continueFlag;
@property (nonatomic) unsigned long long prefetchLastFeedCount;
@property (nonatomic) BOOL isFetchingData;
@property (retain, nonatomic) AnyPromise *seeLaterPromise;
@property (retain, nonatomic) WCFinderFeedArray *seeLaterFeedArray;
@property (nonatomic) BOOL seeLaterContinueFlag;
@property (copy, nonatomic) NSData *seeLaterLastBuffer;
@property (copy, nonatomic) NSString *seeLaterSessionID;
@property (nonatomic) unsigned long long refreshNum;
@property (retain, nonatomic) WCFinderFeedArray *dataSource;
@property (copy, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableDictionary *cellSizeDictionary;
@property (weak, nonatomic) id<WCFinderLongVideoListViewModelDelegate> delegate;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)dealloc;
- (void)requestSeeLaterData:(unsigned long long)a0 finderCtrlInfo:(id)a1;
- (void)requestSeeLaterData:(unsigned long long)a0 finderCtrlInfo:(id)a1 needCallDelegate:(BOOL)a2;
- (void)requestLongVideoData:(unsigned long long)a0 finderCtrlInfo:(id)a1;
- (void)requestDataWithPullType:(unsigned long long)a0;
- (void)requestDataWithPullType:(unsigned long long)a0 finderCtrlInfo:(id)a1;
- (id)snapShot;
- (id)seeLaterContentVM;
- (BOOL)shouldShowMoreSeeLater;
- (id)genSeeLaterListVM;
- (int)commentScene;
- (void)onSeeLaterStateChanged:(BOOL)a0 withDataItem:(id)a1;
- (void)deleteContentVM:(id)a0;
- (long long)indexOfTid:(id)a0;
- (id)contentVMAtDataIndex:(unsigned long long)a0;
- (id)contentVMWithTid:(id)a0;
- (void).cxx_destruct;

@end
