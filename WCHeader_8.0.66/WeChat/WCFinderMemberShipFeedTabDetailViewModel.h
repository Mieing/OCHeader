@class NSString, NSMutableDictionary, WCFinderMemberShipFeedTabViewModel;
@protocol WCFinderMemberShipFeedTabDetailViewModelDelegate;

@interface WCFinderMemberShipFeedTabDetailViewModel : NSObject <WCFinderMemberShipFeedTabViewModelDelegate>

@property (retain, nonatomic) WCFinderMemberShipFeedTabViewModel *feedTabVM;
@property (retain, nonatomic) NSMutableDictionary *contentVMDict;
@property (weak, nonatomic) id<WCFinderMemberShipFeedTabDetailViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFeedTabViewModel:(id)a0;
- (BOOL)hasFetchFirstPageData;
- (BOOL)hasMoreData;
- (unsigned long long)allDataCount;
- (long long)indexOfTid:(id)a0;
- (id)contentVMAtIndex:(unsigned long long)a0;
- (id)contentVMOfTid:(id)a0;
- (id)getContentVMWithfeedTabContentVM:(id)a0;
- (void)deleteContentVM:(id)a0;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (unsigned long long)feedViewerScene;
- (BOOL)isAuthor;
- (void)changeContentVM:(id)a0 stickyTopStatus:(BOOL)a1;
- (void)setupCreatorCenterEntranceInfo:(id)a0 exportId:(id)a1;
- (void)finderMemberShipZoneFeedTabViewNoMoreData;
- (void)finderMemberShipZoneFeedTabViewFetchListSuc;
- (void)finderMemberShipZoneFeedTabViewFetchListFail;
- (void)finderMemberShipZoneFeedTabViewDeleteDataItemVM;
- (void).cxx_destruct;

@end
