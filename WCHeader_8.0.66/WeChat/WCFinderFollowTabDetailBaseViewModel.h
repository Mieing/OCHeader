@class NSString, WCFinderFeedContentVM;
@protocol WCFinderFollowTabDetailVMDelegate;

@interface WCFinderFollowTabDetailBaseViewModel : NSObject <WCFinderPostDataItemExt>

@property (weak, nonatomic) id<WCFinderFollowTabDetailVMDelegate> delegate;
@property (retain, nonatomic) WCFinderFeedContentVM *preVCData;
@property (nonatomic) BOOL postFeedInsertMachineTab;
@property (copy, nonatomic) NSString *noMoreDataTips;
@property (copy, nonatomic) NSString *noDataTips;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)needFetchFirstPageData;
- (BOOL)hasFetchFirstPageData;
- (BOOL)hasMoreData;
- (unsigned long long)allDataCount;
- (long long)indexOfTid:(id)a0;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (id)contentVMOfTid:(id)a0;
- (void)deleteContentVM:(id)a0;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)updateUploadingDataItem:(id)a0;
- (int)commentScene;
- (void)onFinderPostSessionUpLoadSuccessful:(id)a0;
- (BOOL)shouldShowUploadDataItem:(id)a0;
- (BOOL)enableShowPostStateFeed;
- (void).cxx_destruct;

@end
