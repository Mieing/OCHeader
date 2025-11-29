@class AWEPLVAutoPlayTracker, NSString;

@interface AWEPLVAuoPlayCellController : AWEPadListReusableViewBaseController <AWEPLVFocusedCellControllerProtocol>

@property (nonatomic) BOOL videoPlayFinished;
@property (retain, nonatomic) AWEPLVAutoPlayTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (id)commonTrackParams;
- (void)viewDidDisplay;
- (void)configView:(id)a0;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionViewSize:(struct CGSize { double x0; double x1; })a1 contentSize:(struct CGSize { double x0; double x1; })a2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)a0 collectionView:(id)a1;
- (long long)breakPointCardColumnNum;
- (void)viewDidFocused;
- (void)viewDidUnFocused;
- (void).cxx_destruct;
- (Class)viewClass;

@end
