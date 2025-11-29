@class NSIndexPath;

@interface AWELandscapeFeedMultiDeviceHandoffController : AWELandscapeFeedBaseController

@property (retain, nonatomic) NSIndexPath *lastPlayedIndex;

- (void)didEnterLandscape;
- (void)donateHandoff:(id)a0;
- (void).cxx_destruct;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;

@end
