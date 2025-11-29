@class NSString;

@interface AWELandscapeFeedLiveController : AWELandscapeFeedBaseController <AWELandscapeFeedLiveControllerProtocol, AWEAwemeLiveCollectionViewCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)recordLandscapeData;
- (void)setupLiveModelFilter;
- (void)trackExitLiveRoom:(id)a0 byAuto:(BOOL)a1;
- (void)updatePortraitDataWithAwemeModel:(id)a0;
- (void)exitLandscapeFeed;
- (void)liveRoomShouldSrollEnable:(BOOL)a0;
- (void)exitLiveRoomWithAwemeModel:(id)a0 byAuto:(BOOL)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;

@end
