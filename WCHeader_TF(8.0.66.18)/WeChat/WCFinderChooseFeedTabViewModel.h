@class NSString, NSData, NSMutableSet, NSMutableArray, WCFinderFeedPickerParams;
@protocol WCFinderChooseFeedTabViewModelDelegate;

@interface WCFinderChooseFeedTabViewModel : NSObject <WCFinderFeedPickerPreviewListViewModelProtocol>

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSData *lastBuffer;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSMutableSet *tidContainSet;
@property (retain, nonatomic) NSData *lastBuffer;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL continueFlag;
@property (weak, nonatomic) id<WCFinderChooseFeedTabViewModelDelegate> delegate;
@property (nonatomic) unsigned long long dataFilterType;
@property (retain, nonatomic) WCFinderFeedPickerParams *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canShowPublishTab;
+ (BOOL)canShowFinderPicker;

- (id)tabTitle;
- (void)loadData:(BOOL)a0;
- (BOOL)isPublishTabModel;
- (BOOL)hasMoreData;
- (unsigned long long)dataCount;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (id)contentVMOfTid:(id)a0;
- (long long)indexOfTid:(id)a0;
- (void)loadFirstPageData;
- (void)loadNextPageData;
- (void)insertContentVM:(id)a0 atIndex:(unsigned long long)a1;
- (void)onServerGetDataArr:(id)a0 continueFlag:(BOOL)a1 hasError:(BOOL)a2;
- (void)notifyOnDataChanged:(BOOL)a0;
- (int)tabType;
- (void).cxx_destruct;

@end
