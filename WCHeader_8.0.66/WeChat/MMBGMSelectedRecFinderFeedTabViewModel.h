@class NSString, NSData, WCFinderFeedArray, MMBGMSelectedConfig, MMBGMPanelPublishContext;
@protocol MMBGMSelectedRecFinderFeedTabViewModelDelegate;

@interface MMBGMSelectedRecFinderFeedTabViewModel : NSObject <MMBGMTabViewModelProtocol>

@property (retain, nonatomic) WCFinderFeedArray *contentVMs;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSString *currentSearchText;
@property (retain, nonatomic) NSData *sessionBuffer;
@property (nonatomic, getter=isLoadingData) BOOL loadingData;
@property (weak, nonatomic) id<MMBGMSelectedRecFinderFeedTabViewModelDelegate> delegate;
@property (retain, nonatomic) MMBGMSelectedConfig *config;
@property (retain, nonatomic) MMBGMPanelPublishContext *publishContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)tabTitle;
- (unsigned long long)feedCount;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (id)contentVMOfTid:(id)a0;
- (unsigned long long)indexOfTid:(id)a0;
- (id)allVmIds;
- (BOOL)searchDataWithText:(id)a0;
- (void)fetchData;
- (void)fetchMoreData;
- (void)_fetchDataWithText:(id)a0;
- (void)reset;
- (unsigned long long)getMaterialDuration;
- (void).cxx_destruct;

@end
