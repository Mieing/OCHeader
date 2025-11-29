@class NSString, NSMutableArray;

@interface AWEProfileHeaderAgeAndLocationSectionController : AWEBaseListSectionController <AWEProfileHeaderAgeAndLocationCollectionViewCellDelegate>

@property (retain, nonatomic) NSMutableArray *binds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewControllerDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)didSelectItemAtIndex:(long long)a0 model:(id)a1;
- (void)viewControllerWillAppear:(BOOL)a0 isBeingPresented:(BOOL)a1 isMovingToParentViewController:(BOOL)a2;
- (void)trackShowProfileTagWithType:(id)a0;
- (void)refreshPersonalTagHeight:(double)a0;
- (void)transferToLandingPage:(id)a0;
- (void)showEditProfileFromInfoButtons;
- (void)gotoSchoolStory;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)showSeparator;
- (Class)cellClass;

@end
