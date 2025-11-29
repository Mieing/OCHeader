@class NSString, WCFinderMemberShipPlaybackTabViewModel, NSMutableDictionary;
@protocol WCFinderMemberShipPlaybackTabDetailViewModelDelegate;

@interface WCFinderMemberShipPlaybackTabDetailViewModel : NSObject <WCFinderMemberShipPlaybackTabViewModelDelegate>

@property (retain, nonatomic) WCFinderMemberShipPlaybackTabViewModel *playbackTabVM;
@property (retain, nonatomic) NSMutableDictionary *contentVMDict;
@property (weak, nonatomic) id<WCFinderMemberShipPlaybackTabDetailViewModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPlaybackTabViewModel:(id)a0;
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
- (void)setupCreatorCenterEntranceInfo:(id)a0 exportId:(id)a1;
- (void)finderMemberShipZonePlaybackTabViewNoMoreData;
- (void)finderMemberShipZonePlaybackTabViewFetchListSuc;
- (void)finderMemberShipZonePlaybackTabViewFetchListFail;
- (void)finderMemberShipZonePlaybackTabViewDeleteDataItemVM;
- (void).cxx_destruct;

@end
