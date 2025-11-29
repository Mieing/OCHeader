@class NSString;

@interface AWELandscapeFeedTrackOffsetController : AWELandscapeFeedBaseController <AWELandscapeFeedTrackOffsetControllerProtocol>

@property (nonatomic) BOOL hasTrackLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needTrackLandscapeConentOffset;
- (void)setupTrackLandscapeConentOffset;
- (void)prefetchPreviousDataListIfNeededWithDisplayIndexPath:(id)a0;
- (void)scrollLandscapeToTrackOffsetIfNeeded;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidAppear:(BOOL)a0;

@end
